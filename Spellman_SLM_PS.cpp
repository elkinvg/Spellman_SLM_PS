/*----- PROTECTED REGION ID(Spellman_SLM_PS.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        Spellman_SLM_PS.cpp
//
// description : C++ source for the Spellman_SLM_PS class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               Spellman_SLM_PS are implemented in this file.
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <Spellman_SLM_PS.h>
#include <Spellman_SLM_PSClass.h>

/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS.cpp

/**
 *  Spellman_SLM_PS class description:
 *    Server for powersupply Spellman SLM
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name   |  Method name
//================================================================
//  RequestStatus  |  request_status
//  ResetFaults    |  reset_faults
//  SetLocalMode   |  set_local_mode
//  SetRemoteMode  |  set_remote_mode
//  TurnHVOff      |  turn_hvoff
//  TurnHVOn       |  turn_hvon
//  Status         |  Inherited (no method)
//  State          |  Inherited (no method)
//================================================================

//================================================================
//  Attributes managed are:
//================================================================
//  Voltage          |  Tango::DevUShort	Scalar
//  Amperage         |  Tango::DevUShort	Scalar
//  VoltageMonitor   |  Tango::DevUShort	Scalar
//  AmperageMonitor  |  Tango::DevUShort	Scalar
//================================================================

namespace Spellman_SLM_PS_ns
{
/*----- PROTECTED REGION ID(Spellman_SLM_PS::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::Spellman_SLM_PS()
 *	Description : Constructors for a Tango device
 *                implementing the classSpellman_SLM_PS
 */
//--------------------------------------------------------
Spellman_SLM_PS::Spellman_SLM_PS(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::constructor_1
}
//--------------------------------------------------------
Spellman_SLM_PS::Spellman_SLM_PS(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::constructor_2
}
//--------------------------------------------------------
Spellman_SLM_PS::Spellman_SLM_PS(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void Spellman_SLM_PS::delete_device()
{
	DEBUG_STREAM << "Spellman_SLM_PS::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::delete_device
	delete[] attr_Voltage_read;
	delete[] attr_Amperage_read;
	delete[] attr_VoltageMonitor_read;
	delete[] attr_AmperageMonitor_read;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void Spellman_SLM_PS::init_device()
{
	DEBUG_STREAM << "Spellman_SLM_PS::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::init_device_before
	

	//	Get the device properties from database
	get_device_property();
	
	attr_Voltage_read = new Tango::DevUShort[1];
	attr_Amperage_read = new Tango::DevUShort[1];
	attr_VoltageMonitor_read = new Tango::DevUShort[1];
	attr_AmperageMonitor_read = new Tango::DevUShort[1];
	//	No longer if mandatory property not set. 
	if (mandatoryNotDefined)
		return;

	/*----- PROTECTED REGION ID(Spellman_SLM_PS::init_device) ENABLED START -----*/
	
	//	Initialize device
    tangoSocket = new TangoSocket(socket);
    try {
        DEBUG_STREAM << "Socket:   " << socket << endl;

        checkSocketState();
    }
    catch (Tango::DevFailed &e) {
        DEBUG_STREAM << "Can't connect to socket " << socket << endl;
        Tango::Except::print_exception(e);
        set_state(Tango::FAULT);
        set_status("Can't connect to socket " + socket);
    }
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::init_device
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void Spellman_SLM_PS::get_device_property()
{
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::get_device_property_before) ENABLED START -----*/
	
	//	Initialize property data members
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::get_device_property_before

	mandatoryNotDefined = false;

	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("Socket"));
	dev_prop.push_back(Tango::DbDatum("isRS232"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on Spellman_SLM_PSClass to get class property
		Tango::DbDatum	def_prop, cl_prop;
		Spellman_SLM_PSClass	*ds_class =
			(static_cast<Spellman_SLM_PSClass *>(get_device_class()));
		int	i = -1;

		//	Try to initialize Socket from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  socket;
		else {
			//	Try to initialize Socket from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  socket;
		}
		//	And try to extract Socket value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  socket;
		//	Property StartDsPath is mandatory, check if has been defined in database.
		check_mandatory_property(cl_prop, dev_prop[i]);

		//	Try to initialize isRS232 from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  isRS232;
		else {
			//	Try to initialize isRS232 from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  isRS232;
		}
		//	And try to extract isRS232 value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  isRS232;

	}

	/*----- PROTECTED REGION ID(Spellman_SLM_PS::get_device_property_after) ENABLED START -----*/
	
	//	Check device property data members init
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::get_device_property_after
}
//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::check_mandatory_property()
 *	Description : For mandatory properties check if defined in database.
 */
//--------------------------------------------------------
void Spellman_SLM_PS::check_mandatory_property(Tango::DbDatum &class_prop, Tango::DbDatum &dev_prop)
{
	//	Check if all properties are empty
	if (class_prop.is_empty() && dev_prop.is_empty())
	{
		TangoSys_OMemStream	tms;
		tms << endl <<"Property \'" << dev_prop.name;
		if (Tango::Util::instance()->_UseDb==true)
			tms << "\' is mandatory but not defined in database";
		else
			tms << "\' is mandatory but cannot be defined without database";
		string	status(get_status());
		status += tms.str();
		set_status(status);
		mandatoryNotDefined = true;
		/*----- PROTECTED REGION ID(Spellman_SLM_PS::check_mandatory_property) ENABLED START -----*/
		cerr << tms.str() << " for " << device_name << endl;
		
		/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::check_mandatory_property
	}
}


//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void Spellman_SLM_PS::always_executed_hook()
{
	DEBUG_STREAM << "Spellman_SLM_PS::always_executed_hook()  " << device_name << endl;
	if (mandatoryNotDefined)
	{
		string	status(get_status());
		Tango::Except::throw_exception(
					(const char *)"PROPERTY_NOT_SET",
					status.c_str(),
					(const char *)"Spellman_SLM_PS::always_executed_hook()");
	}
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::always_executed_hook) ENABLED START -----*/
	
	//	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void Spellman_SLM_PS::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Spellman_SLM_PS::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::read_attr_hardware
}
//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::write_attr_hardware()
 *	Description : Hardware writing for attributes
 */
//--------------------------------------------------------
void Spellman_SLM_PS::write_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Spellman_SLM_PS::write_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::write_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
    checkSocketState();
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::write_attr_hardware
}

//--------------------------------------------------------
/**
 *	Read attribute Voltage related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Spellman_SLM_PS::read_Voltage(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Spellman_SLM_PS::read_Voltage(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::read_Voltage) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_Voltage_read);
    // ??? request kV setpoint (code 14)
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::read_Voltage
}
//--------------------------------------------------------
/**
 *	Write attribute Voltage related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Spellman_SLM_PS::write_Voltage(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Spellman_SLM_PS::write_Voltage(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevUShort	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::write_Voltage) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::write_Voltage
}
//--------------------------------------------------------
/**
 *	Read attribute Amperage related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Spellman_SLM_PS::read_Amperage(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Spellman_SLM_PS::read_Amperage(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::read_Amperage) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_Amperage_read);
    // ??? request mA setpoint (code 15)
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::read_Amperage
}
//--------------------------------------------------------
/**
 *	Write attribute Amperage related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Spellman_SLM_PS::write_Amperage(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Spellman_SLM_PS::write_Amperage(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevUShort	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::write_Amperage) ENABLED START -----*/

    if (!isSocketOn) return;

    vector<string> amperage;
    string tmpV = "" + w_val; // ??? to_string
    amperage.push_back(tmpV);

    vector<string> parsedReply = sendCommand(string("11"),amperage);

    if (parsedReply.size()<3) {
        set_state(Tango::FAULT);
        set_status("Incorrect reply of Device");
        return;
    }
    if (parsedReply[1][0] == SUCCESS)
    {
        INFO_STREAM << " changed the setpoint of mA" << endl;
        *attr_Amperage_read = w_val;
    }
    else
    {
        if (parsedReply[1] == "1")
        {
            INFO_STREAM << " out of range for amperage" << endl;
            // ??? is it all? set_status set_state
        }
    }
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::write_Amperage
}
//--------------------------------------------------------
/**
 *	Read attribute VoltageMonitor related method
 *	Description: The host requests that the firmware report kV monitor.
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Spellman_SLM_PS::read_VoltageMonitor(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Spellman_SLM_PS::read_VoltageMonitor(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::read_VoltageMonitor) ENABLED START -----*/
	//	Set the attribute value
    // ???
    vector<string> parsedReply = sendCommand(string("60"));
    if (parsedReply.size()<3) {
        set_state(Tango::FAULT);
        set_status("Incorrect reply of Device");
        return;
    }

    unsigned short rV = atoi(parsedReply[1].c_str());
    *attr_VoltageMonitor_read = rV; // ??? unscaled -> to kV

	attr.set_value(attr_VoltageMonitor_read);
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::read_VoltageMonitor
}
//--------------------------------------------------------
/**
 *	Read attribute AmperageMonitor related method
 *	Description: The host requests that the firmware report mA monitor.
 *               
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Spellman_SLM_PS::read_AmperageMonitor(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Spellman_SLM_PS::read_AmperageMonitor(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::read_AmperageMonitor) ENABLED START -----*/
	//	Set the attribute value

    vector<string> parsedReply = sendCommand(string("61"));
    if (parsedReply.size()<3) {
        set_state(Tango::FAULT);
        set_status("Incorrect reply of Device");
        return;
    }

    unsigned short rA = atoi(parsedReply[1].c_str());
    *attr_VoltageMonitor_read = rA; // ??? unscaled -> to mA

	attr.set_value(attr_AmperageMonitor_read);
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::read_AmperageMonitor
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void Spellman_SLM_PS::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command RequestStatus related method
 *	Description: The host requests that the firmware sends the power supply status.
 *
 */
//--------------------------------------------------------
void Spellman_SLM_PS::request_status()
{
	DEBUG_STREAM << "Spellman_SLM_PS::RequestStatus()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::request_status) ENABLED START -----*/
	
	//	Add your own code
    checkSocketState();
    if (!isSocketOn) return;

    vector<string> parsedReply = sendCommand(string("22"));
    // ???

//    string statusAns =
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::request_status
}
//--------------------------------------------------------
/**
 *	Command ResetFaults related method
 *	Description: The host requests that the firmware resets all Fault messages and indicators.
 *
 */
//--------------------------------------------------------
void Spellman_SLM_PS::reset_faults()
{
	DEBUG_STREAM << "Spellman_SLM_PS::ResetFaults()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::reset_faults) ENABLED START -----*/
	
	//	Add your own code
    checkSocketState();
    if (!isSocketOn) return;

    vector<string> parsedReply = sendCommand(string("31"));

    if (parsedReply.size()<3) {
        set_state(Tango::FAULT);
        set_status("Incorrect reply of Device");
        return;
    }
    if (parsedReply[1][0] == SUCCESS)
    {
        INFO_STREAM << "Firmware reset all fault messages" << endl;
    }
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::reset_faults
}
//--------------------------------------------------------
/**
 *	Command SetLocalMode related method
 *	Description: The host requests that the firmware to Local Mode.
 *
 *	@returns 
 */
//--------------------------------------------------------
Tango::DevUShort Spellman_SLM_PS::set_local_mode()
{
	Tango::DevUShort argout;
	DEBUG_STREAM << "Spellman_SLM_PS::SetLocalMode()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::set_local_mode) ENABLED START -----*/
	
	//	Add your own code
    checkSocketState();
    if (!isSocketOn) return 65535;

    argout = setOnOrOffCom(false,string("99"));

    if (!argout) INFO_STREAM << "Local Mode" << endl;
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::set_local_mode
	return argout;
}
//--------------------------------------------------------
/**
 *	Command SetRemoteMode related method
 *	Description: The host requests that the firmware to Remote Mode.
 *
 *	@returns 
 */
//--------------------------------------------------------
Tango::DevUShort Spellman_SLM_PS::set_remote_mode()
{
	Tango::DevUShort argout;
	DEBUG_STREAM << "Spellman_SLM_PS::SetRemoteMode()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::set_remote_mode) ENABLED START -----*/
	
	//	Add your own code

    checkSocketState();
    if (!isSocketOn) return 65535;

    argout = setOnOrOffCom(true,string("99"));

    if (!argout) INFO_STREAM << "Remote Mode" << endl;
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::set_remote_mode
	return argout;
}
//--------------------------------------------------------
/**
 *	Command TurnHVOff related method
 *	Description: The host requests that the firmware turn high voltage on or high voltage off.
 *               Response: 0 is ok
 *
 *	@returns 
 */
//--------------------------------------------------------
Tango::DevUShort Spellman_SLM_PS::turn_hvoff()
{
	Tango::DevUShort argout;
	DEBUG_STREAM << "Spellman_SLM_PS::TurnHVOff()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::turn_hvoff) ENABLED START -----*/
	
	//	Add your own code
    checkSocketState();
    if (!isSocketOn) return 65535;

    argout = setOnOrOffCom(false,string("98"));

    if (!argout) INFO_STREAM << "HV is OFF" << endl;
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::turn_hvoff
	return argout;
}
//--------------------------------------------------------
/**
 *	Command TurnHVOn related method
 *	Description: The host requests that the firmware turn high voltage on.
 *               Output: 0 is Ok, 1 is out of range
 *
 *	@returns 
 */
//--------------------------------------------------------
Tango::DevUShort Spellman_SLM_PS::turn_hvon()
{
	Tango::DevUShort argout;
	DEBUG_STREAM << "Spellman_SLM_PS::TurnHVOn()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::turn_hvon) ENABLED START -----*/
	
	//	Add your own code
    checkSocketState();
    if (!isSocketOn) return 65535;

    argout = setOnOrOffCom(true,string("98"));

    if (!argout) INFO_STREAM << "HV is ON" << endl;
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::turn_hvon
	return argout;
}
//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void Spellman_SLM_PS::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
    /*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::add_dynamic_commands
}

/*----- PROTECTED REGION ID(Spellman_SLM_PS::namespace_ending) ENABLED START -----*/

//	Additional Methods
void Spellman_SLM_PS::checkSocketState()
{
    isSocketOn = tangoSocket->checkSocketState();

    if (!isSocketOn)
    {
        set_state(Tango::OFF);
        set_status("Device is OFF or Socket is FAULT");
    }
}

Tango::DevUShort Spellman_SLM_PS::setOnOrOffCom(Tango::DevBoolean mode, string command)
{
    vector<string> arg;

    if(mode) arg.push_back("1");
    else arg.push_back("0");

    vector<string> parsedReply = sendCommand(command,arg);

    if (parsedReply.size()<3) {
        set_state(Tango::FAULT);
        set_status("Incorrect reply of Device");
        return 65535;
    }
    if (parsedReply[1][0] == SUCCESS)
    {
        return 0;
    }
    if (parsedReply[1][0] == '1')
    {
        INFO_STREAM << "Out of Range" << endl;
        return 1;
    }
}


string Spellman_SLM_PS::generateCommand(string idCommand, vector<string> arguments)
{
    // Generate TCP/IP or rs232 Command
    // isRS232 for checking if data from RS232

    string command_out;
    command_out.push_back(STX);
    command_out += idCommand;
    command_out.push_back(COMMA);

    for (unsigned int i=0; i<arguments.size();i++) command_out += (arguments[i] + COMMA);

    command_out.push_back(ETX);

    return command_out;
}

string Spellman_SLM_PS::generateCommand(string idCommand)
{
    // Generate TCP/IP or rs232 Command without arguments
    // isRS232 for checking if data from RS232

    string command_out;
    command_out.push_back(STX);
    command_out += idCommand;
    command_out.push_back(COMMA);

    command_out.push_back(ETX);

    return command_out;
}

vector<string> Spellman_SLM_PS::sendCommand(string idCommand, vector<string> arguments)
{
    string comms = generateCommand(idCommand,arguments);

    string reply = tangoSocket->toSocketWriteAndRead(comms);

    return parseResponse(reply);

}

vector<string> Spellman_SLM_PS::sendCommand(string idCommand)
{
    string comms = generateCommand(idCommand);

    string reply = tangoSocket->toSocketWriteAndRead(comms);

    return parseResponse(reply);
}


vector<string> Spellman_SLM_PS::parseResponse(string response)
{
    size_t pos;
    string token;
    string delimeter = ",";

    vector<string> out;

    while ((pos = response.find(delimeter)) != std::string::npos) {
        token = response.substr(0,pos);
        out.push_back(token);
        response.erase(0,pos + delimeter.length());
    }
    out.push_back(response);
    return out;
}

/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::namespace_ending
} //	namespace
