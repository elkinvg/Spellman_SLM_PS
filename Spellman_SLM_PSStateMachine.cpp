/*----- PROTECTED REGION ID(Spellman_SLM_PSStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        Spellman_SLM_PSStateMachine.cpp
//
// description : State machine file for the Spellman_SLM_PS class
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

/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::Spellman_SLM_PSStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  ON      |  
//  FAULT   |  


namespace Spellman_SLM_PS_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_Voltage_allowed()
 *	Description : Execution allowed for Voltage attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_Voltage_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for Voltage attribute in Write access.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::VoltageStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::VoltageStateAllowed_WRITE

	//	Not any excluded states for Voltage attribute in read access.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::VoltageStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::VoltageStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_Amperage_allowed()
 *	Description : Execution allowed for Amperage attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_Amperage_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for Amperage attribute in Write access.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::AmperageStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::AmperageStateAllowed_WRITE

	//	Not any excluded states for Amperage attribute in read access.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::AmperageStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::AmperageStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_VoltageMonitor_allowed()
 *	Description : Execution allowed for VoltageMonitor attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_VoltageMonitor_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for VoltageMonitor attribute in read access.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::VoltageMonitorStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::VoltageMonitorStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_AmperageMonitor_allowed()
 *	Description : Execution allowed for AmperageMonitor attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_AmperageMonitor_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AmperageMonitor attribute in read access.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::AmperageMonitorStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::AmperageMonitorStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_RequestStatus_allowed()
 *	Description : Execution allowed for RequestStatus attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_RequestStatus_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for RequestStatus command.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::RequestStatusStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::RequestStatusStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_ResetFaults_allowed()
 *	Description : Execution allowed for ResetFaults attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_ResetFaults_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ResetFaults command.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::ResetFaultsStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::ResetFaultsStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_SetLocalMode_allowed()
 *	Description : Execution allowed for SetLocalMode attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_SetLocalMode_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetLocalMode command.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::SetLocalModeStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::SetLocalModeStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_SetRemoteMode_allowed()
 *	Description : Execution allowed for SetRemoteMode attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_SetRemoteMode_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetRemoteMode command.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::SetRemoteModeStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::SetRemoteModeStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_TurnHVOff_allowed()
 *	Description : Execution allowed for TurnHVOff attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_TurnHVOff_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for TurnHVOff command.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::TurnHVOffStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::TurnHVOffStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spellman_SLM_PS::is_TurnHVOn_allowed()
 *	Description : Execution allowed for TurnHVOn attribute
 */
//--------------------------------------------------------
bool Spellman_SLM_PS::is_TurnHVOn_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for TurnHVOn command.
	/*----- PROTECTED REGION ID(Spellman_SLM_PS::TurnHVOnStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::TurnHVOnStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(Spellman_SLM_PS::Spellman_SLM_PSStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Spellman_SLM_PS::Spellman_SLM_PSStateAllowed.AdditionalMethods

}	//	End of namespace
