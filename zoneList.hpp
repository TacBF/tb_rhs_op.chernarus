#include "tb_defines.hpp"
//Mission:
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC  PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}	, 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {10}      	, {}	, 1      , {}        , 0    , "%3" },

{ 2, TEAM_NEUTRAL, 	SPAWN_NEVER,    {10,3}      , {}	, 1      , {}        , 0    , "Staging Point" },

{ 3, TEAM_NEUTRAL, 	SPAWN_NEVER,    {2,4}  		, {}	, 1      , {}        , 0    , "Mill" },

{ 4, TEAM_NEUTRAL, 	SPAWN_NEVER,    {3,5}      	, {}	, 1      , {}        , 0    , "Apartments" },

{ 5, TEAM_RED, 	SPAWN_NEVER,    {4,6}      	, {}	, 1      , {}        , 0    , "Warehouse" },

{ 6, TEAM_RED, 		SPAWN_NEVER,    {5,11}		, {}	, 1      , {}        , 0    , "Headquarters" },

{ 7, TEAM_RED, 		SPAWN_XRAY ,    {11}      	, {}	, 1      , {}        , 0    , "%3" },

{ 8, TEAM_RED, 		SPAWN_INSTANT,    {}		, {}	, 1      , {5,7}     , 1    , "Forward Base" },

{ 9, TEAM_BLUE, 	SPAWN_INSTANT ,    {}      	, {}	, 1      , {}     , 0    , "Forward Base" },

{ 10, TEAM_NEUTRAL, 	SPAWN_NEVER,    {1,2}		, {}	, 1      , {}     , 0    , "Docks" },

{ 11, TEAM_RED, 	SPAWN_NEVER,    {6,7}		, {}	, 1      , {}     , 0    , "Last Stand" }
};
