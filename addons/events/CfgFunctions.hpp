// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
    class CBA
    {
        class Events
        {
            // CBA_fnc_addDisplayHandler
            class addDisplayHandler
            {
                description = "Adds an action to a displayHandler";
                file = "\x\cba\addons\events\fnc_addDisplayHandler.sqf";
            };
            // CBA_fnc_addEventHandler
            class addEventHandler
            {
                description = "Registers an event handler for a specific CBA event.";
                file = "\x\cba\addons\events\fnc_addEventHandler.sqf";
            };
            // CBA_fnc_addKeyHandler
            class addKeyHandler
            {
                description = "Adds an action to a keyhandler";
                file = "\x\cba\addons\events\fnc_addKeyHandler.sqf";
            };
            // CBA_fnc_addKeyHandlerFromConfig
            class addKeyHandlerFromConfig
            {
                description = "Adds an action to a keyhandler, read from config";
                file = "\x\cba\addons\events\fnc_addKeyHandlerFromConfig.sqf";
            };
            // CBA_fnc_addLocalEventHandler
            class addLocalEventHandler
            {
                description = "Registers an event handler for a specific CBA event which only runs where the first parameter (object) is local.";
                file = "\x\cba\addons\events\fnc_addLocalEventHandler.sqf";
            };
            // CBA_fnc_changeKeyHandler
            class changeKeyHandler
            {
                description = "Changes an action to a keyhandler";
                file = "\x\cba\addons\events\fnc_changeKeyHandler.sqf";
            };
            // CBA_fnc_globalEvent
            class globalEvent
            {
                description = "Raises a CBA event on all machines, including the local one.";
                file = "\x\cba\addons\events\fnc_globalEvent.sqf";
            };
            // CBA_fnc_localEvent
            class localEvent
            {
                description = "Raises a CBA event only on the local machine.";
                file = "\x\cba\addons\events\fnc_localEvent.sqf";
            };
            // CBA_fnc_readKeyFromConfig
            class readKeyFromConfig
            {
                description = "Reads key setting from config";
                file = "\x\cba\addons\events\fnc_readKeyFromConfig.sqf";
            };
            // CBA_fnc_remoteEvent
            class remoteEvent
            {
                description = "Raises a CBA event on all machines EXCEPT the local one.";
                file = "\x\cba\addons\events\fnc_remoteEvent.sqf";
            };
            // CBA_fnc_removeDisplayHandler
            class removeDisplayHandler
            {
                description = "Removes an action to a displayHandler";
                file = "\x\cba\addons\events\fnc_removeDisplayHandler.sqf";
            };
            // CBA_fnc_removeEventHandler
            class removeEventHandler
            {
                description = "Removes an event handler previously registered with CBA_fnc_addEventHandler.";
                file = "\x\cba\addons\events\fnc_removeEventHandler.sqf";
            };
            // CBA_fnc_removeKeyHandler
            class removeKeyHandler
            {
                description = "Removes an action to a keyhandler";
                file = "\x\cba\addons\events\fnc_removeKeyHandler.sqf";
            };
            // CBA_fnc_removeLocalEventHandler
            class removeLocalEventHandler
            {
                description = "Removes an event handler previously registered with CBA_fnc_addLocalEventHandler.";
                file = "\x\cba\addons\events\fnc_removeLocalEventHandler.sqf";
            };
            // CBA_fnc_whereLocalEvent
            class whereLocalEvent
            {
                description = "Raises a CBA event only on the machine where parameter one is local.";
                file = "\x\cba\addons\events\fnc_whereLocalEvent.sqf";
            };
            // CBA_fnc_addClientToServerEventhandler
            class addClientToServerEventhandler {
                description = "Registers an event handler for a client to server event which only runs on the server (thus is only needed on the server)";
                file = "\x\cba\addons\events\fnc_addClientToServerEventhandler.sqf";
            };
            // CBA_fnc_clientToServerEvent
            class clientToServerEvent {
                description = "Raises an CBA event only on the server (only broadcasted to server and not to other clients)";
                file = "\x\cba\addons\events\fnc_clientToServerEvent.sqf";
            };
            // CBA_fnc_removeClientToServerEvent
            class removeClientToServerEvent {
                description = "Removes client to server event";
                file = "\x\cba\addons\events\fnc_removeClientToServerEvent.sqf";
            };
            // CBA_fnc_addReceiverOnlyEventhandler
            class addReceiverOnlyEventhandler {
                description = "Registers an event handler for an CBA event which is only broadcasted to the receiver (and no other clients)";
                file = "\x\cba\addons\events\fnc_addReceiverOnlyEventhandler.sqf";
            };
            // CBA_fnc_receiverOnlyEvent
            class receiverOnlyEvent {
                description = "Raises an CBA event only on the receiver and is only broadcasted there";
                file = "\x\cba\addons\events\fnc_receiverOnlyEvent.sqf";
            };
            // CBA_fnc_removeReceiverOnlyEvent
            class removeReceiverOnlyEvent {
                description = "Removes receiver only event";
                file = "\x\cba\addons\events\fnc_removeReceiverOnlyEvent.sqf";
            };

        };
    };
};