var fs = require("fs");

eval(fs.readFileSync("dmc3_core.js", "utf8"));

const CHAR_DANTE  = 1;
const CHAR_BOB    = 2;
const CHAR_LADY   = 4;
const CHAR_VERGIL = 8;

const SIZE_DANTE  = 0xB8C0;
const SIZE_BOB    = 0xB680;
const SIZE_LADY   = 0x8280;
const SIZE_VERGIL = 0xB8C0;

var items =
[
	[ "status"                              , "uint8"                   , 8                                ],

	[ "speed"                              , "float"                   , 0x14                                ],
	[ "speedMultiplier"                              , "float"                   , 0x18                                ],

	[ "character"                           , "uint32"                  , 0x78                             ],
	[ "position"                            , "vec4"                    , 0x80                             ],
	[ "pull"                                , "float"                 , 0x94                             ],
	[ "pullMultiplier"                      , "float"                 , 0xA4                             ],
	[ "rotation"                            , "uint16"                  , 0xC0                             ],
	[ "id"                                  , "uint8"                   , 0x118                            ],
	[ "isClone"                             , "bool32"                  , 0x11C                            ],
	[ "visibility"                             , "uint32"                  , 0x120                            ],
	[ ""                                    , "float"                 , 0x1C0                            ],
	[ ""                                    , "float"                 , 0x1C4                            ],

	[ "modelData[3]"                   , "ModelData"        , 0x200  ],
	[ "modelPhysicsMetadataPool[4][24]", "PhysicsMetadata *", 0x1880 ],
	[ "modelAllocationDataCount"       , "uint32"           , 0x1B80 ],
	[ "modelAllocationData[209]"       , "Size_32"          , 0x1B88 ],




	//[ "[2]"       , "Size_96"          , 0x37D0 ],









	[ "motionSpeed"          , "float"                 , 0x3894                           ],
	[ "motionSpeedMultiplier", "float"                 , 0x3898                           ],
	[ "motionArchives[34]"                   , "byte8 *"                 , 0x38A0                           ],
	[ "motionData[2]"                       , "MotionData"             , 0x39B0                           ],
	[ "motionDataMirror[3]"                 , "MotionData"             , 0x39B4                           ],
	[ ""                                    , "uint32"                  , 0x39BC                           ],
	[ "[16]"                                , "uint8"                   , 0x39C0                           ],
	[ "nextActionRequestPolicy[16]"         , "uint32"                  , 0x39D0                           ],
	[ "[8]"                                 , "uint8"                   , 0x3A10                           ],
	[ "shadow"                              , "uint32"                  , 0x3A18                           ],
	[ "lastShadow"                              , "uint32"                  , 0x3A1C                           ],
	[ "color"                               , "byte32"                  , 0x3A28                           ],

	[ "recoveryData[3]", "RecoveryData"                  , 0x3B00                           ],



	[ "[2]", "byte8"                  , 0x3C50                           ],

	[ "actionData[6]"                       , "byte8 *"                 , 0x3DD0                           ],
	[ "eventData[2]"                        , "ActorEventData"        , 0x3E00                           ],
	[ "[32]"                                , "uint8"                   , 0x3E10                           ],
	[ "motionTimer"                         , "float"                 , 0x3E34                           ],
	[ "idleTimer"                           , "float"                 , 0x3E38                           ],
	[ "permissions"                         , "byte32"                  , 0x3E60                           ],
	[ "state"                               , "byte32"                  , 0x3E64                           ],
	[ "lastState"                           , "byte32"                  , 0x3E68                           ],





	[ "activeModelIndex"                    , "uint32"                  , 0x3E6C                           ],
	[ "queuedModelIndex"                    , "uint32"                  , 0x3E70                           ],

	[ "devilModels[3]"                      , "uint32"                  , 0x3E74                           ],

	[ "modelState"                          , "uint8"                   , 0x3E80                           ],
	[ "lockOn"                              , "bool32"                  , 0x3E84                           ],



	
	[ "activeModelIndexMirror"              , "uint32"                  , 0x3E88                           ],






	[ "activeDevil"                         , "uint32"                  , 0x3E8C                           ],

	[ "airRaid"                             , "uint32"                  , 0x3E90                           ],
	[ "mode"                                , "uint32"                  , 0x3E94                           ],
	[ "devil"                               , "bool"                    , 0x3E9B                           ],
	[ "costume"                             , "uint8"                   , 0x3E9E                           ],




	[ "sparda,neroAngelo"                              , "bool,bool"                    , 0x3E9F               ],


	


	// [ "sparda"                              , "bool"                    , 0x3E9F, CHAR_DANTE               ],
	// [ "neroAngelo"                          , "bool"                    , 0x3E9F, CHAR_VERGIL              ],



	//[ "sparda/neroAngelo"                          , "bool/bool"                    , 0x3E9F,   ],

	//[ "sparda/neroAngelo/mundus", "bool/uint32/uint64", 0x3E9F ],


	







	[ "useHolyWater"                        , "bool"                    , 0x3EA4                           ],
	[ "magicPoints"                         , "float"                 , 0x3EB8                           ],
	[ "maxMagicPoints"                      , "float"                 , 0x3EBC                           ],





	[ ""                                    , "float"                  , 0x3EC4                           ],
	[ ""                                    , "float"                  , 0x3EC8                           ],





	[ ""                                    , "uint16"                  , 0x3ED2                           ],
	[ "cameraDirection"                     , "uint16"                  , 0x3ED8                           ],
	[ "airHikeCount"                        , "uint8"                   , 0x3F11                           ],
	[ "kickJumpCount"                       , "uint8"                   , 0x3F12                           ],
	[ "wallHikeCount"                       , "uint8"                   , 0x3F13                           ],
	[ ""                                    , "bool"                    , 0x3F19                           ],
	[ "action"                              , "uint8"                   , 0x3FA4                           ],
	[ "lastAction"                          , "uint8"                   , 0x3FA5                           ],
	[ "bufferedAction"                      , "uint8"                   , 0x3FA8                           ],
	[ "chainCount"                          , "uint8"                   , 0x3FAC                           ],
	[ "expertise[16]"                       , "byte32"                  , 0x3FEC                           ],
	//[ ""                        , "float"                 , 0x402C                           ],
	[ "maxHitPoints"                        , "float"                 , 0x40EC                           ],
	[ "hitPoints"                           , "float"                 , 0x411C                           ],





	[ "targetBaseAddr"                      , "byte8 *"                 , 0x6328                           ],

	

	[ "style"                               , "uint32"                  , 0x6338                           ],


	[ ""                      , "uint32"                 , 0x6340                           ],


	[ "styleLevel"                          , "uint32"                  , 0x6358                           ],
	[ "dashCount"                           , "uint8"                   , 0x635C,                ],
	[ "skyStarCount"                        , "uint8"                   , 0x635D,                ],
	[ "airTrickCount"                       , "uint8"                   , 0x635E,  ],
	[ "trickUpCount"                        , "uint8"                   , 0x635F,               ],
	[ "trickDownCount"                      , "uint8"                   , 0x6360,               ],
	[ "quicksilver"                         , "bool"                    , 0x6361               ],
	[ "doppelganger"                        , "bool"                    , 0x6362               ],
	[ "styleExperience"                     , "float"                 , 0x6364                           ],

	[ "speedMode"                         , "uint32"                    , 0x63D4               ],






	// @Todo: Add CloneData.


	[ "[40]"                       , "byte8"                    , 0x6410                           ],
	[ ""                       , "byte8 *"                    , 0x6438                           ],
	[ ""                       , "uint32"                    , 0x6440                           ],
	[ "cloneRate"                       , "uint32"                    , 0x6450                           ],




	[ ""                       , "uint32"                    , 0x6454                           ],




	[ "[32]"                       , "byte8"                    , 0x6458                           ],
	// @Todo: Rename to cloneActorBaseAddr.
	[ "cloneBaseAddr"                       , "byte8 *"                 , 0x6478                           ],
	[ "cloneIsControlledByPlayer"           , "bool"                    , 0x6480                           ],





















	[ "activeMeleeWeaponIndex"              , "uint32"                  , 0x6484,               ],
	[ "queuedMeleeWeaponIndex"              , "uint32"                  , 0x6488,               ],
	[ "activeWeapon"                        , "uint8"                   , 0x648D,                ],
	[ "meleeWeaponIndex"                    , "uint32"                  , 0x6490,                ],
	[ "rangedWeaponIndex"                   , "uint32"                  , 0x6494,                ],



	[ "weapons[5]"                          , "uint8"                   , 0x6498                           ],
	[ "weaponDataAddr[5]"                   , "WeaponData *"            , 0x64A0                           ],
	[ "weaponStatus[5]"                     , "uint32"                  , 0x64C8                           ],
	[ "weaponLevels[5]"                     , "uint32"                  , 0x64DC                           ],

	
	[ "activeMeleeWeapon"                   , "uint8"                   , 0x64F0,                ],
	[ "activeRangedWeapon"                  , "uint8"                   , 0x64F1,                ],
	
	[ "weaponTimers[5]"                     , "float"                 , 0x64F4                           ],

	[ "meleeWeaponSwitchTimeout"            , "float"                 , 0x6508,                ],
	[ "rangedWeaponSwitchTimeout"           , "float"                 , 0x650C,                ],
	// [ "meleeWeaponSwitchForwardTimeout"     , "float"                 , 0x6508, CHAR_VERGIL              ],
	// [ "meleeWeaponSwitchBackTimeout"        , "float"                 , 0x650C, CHAR_VERGIL              ],
	
	[ "styleRank"                           , "uint32"                  , 0x6510                           ],
	[ "styleMeter"                          , "float"                 , 0x6514                           ],
	[ "inputData[58]"                       , "InputData"              , 0x6674                           ],





	[ "bodyPartData[3][2]"                      , "BodyPartData"                  , 0x6950                           ],

















	
	




	[ "collisionData"                      , "CollisionData"                  , 0x7250                           ],



	// [ "[4]"                      , "byte8"                  , 0x7250                           ],
	// [ "collisionIndex"                      , "uint32"                  , 0x7254                           ],
	// [ "interactionData[8]"                  , "vec4"                    , 0x7460                           ],








	[ "buttons[4]"                          , "byte16"                  , 0x74E0                           ],
	[ "rightStickPosition"                  , "uint16"                  , 0x74F8                           ],
	[ "rightStickRadius"                    , "uint16"                  , 0x74FA                           ],
	[ "leftStickPosition"                   , "uint16"                  , 0x7508                           ],
	[ "leftStickRadius"                     , "uint16"                  , 0x750A                           ],
	[ "actorCameraDirection"                , "uint16"                  , 0x750C                           ],
	[ "leftStickDirection[2]"               , "uint32"                  , 0x751C                           ],




	[ "submodelData[5]"                     , "ModelData"        , 0x7540 ],
	[ "submodelInit[5]"                     , "bool"             , 0x9AC0 ],

	[ "modelShadowData[3]"                  , "ShadowData"       , 0x9AD0, CHAR_DANTE ],
	[ "submodelShadowData[5]"               , "ShadowData"       , 0x9D10, CHAR_DANTE ],
	[ "submodelPhysicsMetadataPool[39]"     , "PhysicsMetadata *", 0xA0D0, CHAR_DANTE ],
	[ "submodelPhysicsData"                 , "PhysicsData"      , 0xA210, CHAR_DANTE ],

	[ "modelShadowData[3]"                  , "ShadowData"       , 0x9AF0, CHAR_VERGIL ],
	[ "submodelShadowData[5]"               , "ShadowData"       , 0x9D30, CHAR_VERGIL ],
	[ "submodelPhysicsMetadataPool[39]"     , "PhysicsMetadata *", 0xA0F0, CHAR_VERGIL ],
	[ "submodelPhysicsData"                 , "PhysicsData"      , 0xA230, CHAR_VERGIL ],
	




	
	[ "devilModelPhysicsMetadataPool[2][36]", "PhysicsMetadata *", 0xA300, CHAR_DANTE ],
	[ "devilSubmodelPhysicsData[4]"         , "PhysicsData"      , 0xA540, CHAR_DANTE ],
	[ "devilSubmodelPhysicsLinkData[4][4]"  , "PhysicsLinkData"  , 0xAA00, CHAR_DANTE ],





	[ "devilModelMetadata"                  , "DevilModelMetadataDante" , 0xB600, CHAR_DANTE               ],



	
	[ "modelMetadata[6]"                    , "ModelMetadata"           , 0xB630, CHAR_DANTE               ],


	[ "modelMetadata[6]"                    , "ModelMetadata"    , 0xB640, CHAR_VERGIL ],






	[ "artemisChargeValue[2]"               , "float"                 , 0xB868, CHAR_DANTE               ],
	[ "artemisChargeFlags[2]"               , "byte32"                  , 0xB87C, CHAR_DANTE               ],
];










var extra =
[
	[ "newFirstVar", "uint32" ],



	




	//[ "var,var2,var3", "bool,int,uint16" ],



	// __NEW_PRIME__
	/*
	[ "modelData[3]"                        , "ModelData"        , 0x200  ],
	[ "modelPhysicsMetadataPool[4][24]"     , "PhysicsMetadata *", 0x1880 ],
	[ "modelAllocationData[209]"            , "Size_32"          , 0x1B88 ],
	[ "recoveryData[4]"                     , "RecoveryData"     , 0x3B00 ],
	[ "devilModels[3]"                      , "uint32"           , 0x3E74 ],
	[ "bodyPartData[4][2]"                  , "BodyPartData"     , 0x6950 ],
	[ "submodelData[5]"                     , "ModelData"        , 0x7540 ],
	[ "modelShadowData[3]"                  , "ShadowData"       , 0x9AD0 ],
	[ "submodelShadowData[5]"               , "ShadowData"       , 0x9D10 ],
	[ "devilModelPhysicsMetadataPool[2][36]", "PhysicsMetadata *", 0xA300 ],
	[ "devilSubmodelPhysicsData[4]"         , "PhysicsData"      , 0xA540 ],
	[ "devilSubmodelPhysicsLinkData[4][4]"  , "PhysicsLinkData"  , 0xAA00 ],
	*/



	[ "newModelData[6]"                        , "ModelData"         ],
	[ "newModelPhysicsMetadataPool[7][24]"     , "PhysicsMetadata *" ],
	[ "newModelAllocationData[512]"            , "Size_32"           ],
	[ "newRecoveryData[6]"                     , "RecoveryData"      ],
	[ "newDevilModels[6]"                      , "uint32"            ],
	[ "newBodyPartData[7][2]"                  , "BodyPartData"      ],
	[ "newSubmodelData[11]"                    , "ModelData"         ],
	[ "newSubmodelInit[11]"                    , "bool"              ],
	[ "newModelShadowData[6]"                  , "ShadowData"        ],
	[ "newSubmodelShadowData[11]"              , "ShadowData"        ],
	[ "newDevilModelPhysicsMetadataPool[5][36]", "PhysicsMetadata *" ],
	[ "newDevilSubmodelPhysicsData[10]"        , "PhysicsData"       ],
	[ "newDevilSubmodelPhysicsLinkData[10][4]" , "PhysicsLinkData"   ],


















	// __OLD__
	/*
	[ "newModelData[6]"                        , "ModelData"         ],
	[ "newModelPhysicsMetadataPool[7][24]"     , "PhysicsMetadata *" ],
	[ "newModelAllocationData[512]"            , "Size_32"           ],
	[ "newBodyPartData[7][2]"                  , "BodyPartData"      ],
	[ "newDevilModelPhysicsMetadataPool[5][36]", "PhysicsMetadata *" ],
	[ "newRecoveryData[7]"                     , "RecoveryData"      ],
	[ "newSubmodelData[11]"                    , "ModelData"         ],
	[ "newModelShadowData[6]"                  , "ShadowData"        ],
	[ "newSubmodelShadowData[11]"              , "ShadowData"        ],
	[ "newDevilSubmodelPhysicsData[10]"        , "PhysicsData"       ],
	[ "newDevilSubmodelPhysicsLinkData[10][4]" , "PhysicsLinkData"   ],
	[ "newDevilModels[6]"                      , "uint32"            ],
	*/





	[ "newWeapons[10]"      , "uint8"   ],
	[ "newWeaponDataAddr[10]"   , "WeaponData *" ],
	[ "newWeaponStatus[10]" , "uint32"  ],
	[ "newWeaponLevels[10]" , "uint32"  ],
	[ "newWeaponTimers[10]" , "float" ],






	[ "newIsClone", "bool32" ],









	[ "newPlayerIndex"   , "uint8" ],
	[ "newCharacterIndex", "uint8" ],
	[ "newEntityIndex"   , "uint8" ],






	[ "newForceFiles"         , "bool"  ],
	[ "newForceFilesCharacter", "uint8" ],





	[ "newEnableVisibility", "bool" ],
	//[ "newLastEnableVisibility", "bool" ],




	// @Todo: shoulda be index.
	[ "newGamepad"             , "uint8"   ],
	[ "newButtonMask"          , "byte16"  ],
	[ "newEnableRightStick"    , "bool"    ],
	[ "newEnableLeftStick"     , "bool"    ],














	// [ "newCharacter"     , "uint8"   ],
	// [ "newLastCharacter"     , "uint8"   ],

	// [ "newExecuteCharacterSwitch"     , "bool"   ],



	// [ "newMeleeWeapons[5]"     , "uint8"   ],
	// [ "newMeleeWeaponCount"    , "uint8"   ],
	// [ "newMeleeWeaponIndex"    , "uint8"   ],
	// [ "newLastMeleeWeapon"    , "uint8"   ],


	// [ "newRangedWeapons[5]"    , "uint8"   ],
	// [ "newRangedWeaponCount"   , "uint8"   ],
	// [ "newRangedWeaponIndex"   , "uint8"   ],
	// [ "newLastRangedWeapon"   , "uint8"   ],

	// [ "newStyle"   , "uint8"   ],







	[ "newExecuteStyleSwitch"     , "bool"   ],
	[ "newExecuteRemoveBusyFlag"     , "bool"   ],




	
	//[ "newPlayerData", "PlayerData *" ],
	//[ "newParentBaseAddr"      , "byte8 *" ],
	//[ "newChildBaseAddr"       , "byte8 *" ],

	//[ "newMeleeWeaponData[5]"  , "byte8 *" ],
	//[ "newLastMeleeWeapon"     , "uint8"   ],
	//[ "newRangedWeaponData[5]" , "byte8 *" ],
	//[ "newLastRangedWeapon"    , "uint8"   ],

	//[ "newSect[8]"             , "bool"    ],


	//[ "newEnable"           , "bool"    ],


	// [ "newBufferedActionPolicy", "uint8"   ],
	[ "newAirStingerCount"     , "uint8"   ],
	// [ "newDevilAura"           , "byte8 *" ],
	[ "newEffectIndices[8]"    , "byte32"  ],


	



	[ "newEnableCollision", "bool" ],



	[ "newActorLoopRun", "bool" ],





	[ "newLastVar", "uint32" ],




];

// Cpp

console.log("Cpp");
console.log("");

var c_assert = "";

var filename = "../Mary/Vars.h"

var file = fs.readFileSync(filename, "utf8");

var startTag = /\/\/ \$ActorDataStart$/;
var endTag   = /\/\/ \$ActorDataEnd$/;

var startTagLine = -1;
var endTagLine   = -1;

var obj = file.match(/[\S\s]*?\r\n/g);

for (var index = 0; index < obj.length; index++)
{
	var str = obj[index].substring(0, (obj[index].length - 2));
	if (str.match(startTag))
	{
		startTagLine = index;
		break;
	}
}

if (startTagLine == -1)
{
	console.log("Start tag not found.");
	return;
}

for (var index = 0; index < obj.length; index++)
{
	var str = obj[index].substring(0, (obj[index].length - 2));
	if (str.match(endTag))
	{
		endTagLine = index;
		break;
	}
}

if (endTagLine == -1)
{
	console.log("End tag not found.");
	return;
}

if (endTagLine < startTagLine)
{
	console.log("End tag appears before start tag.");
	return;
}

console.log("startTagLine " + (startTagLine + 1));
console.log("endTagLine   " + (endTagLine   + 1));

for (var index = 0; index <= startTagLine; index++)
{
	var str = obj[index].substring(0, (obj[index].length - 2));
	c += str + NEW_LINE;
}

c += NEW_LINE;



function CreateActorDataFunction
(
	structName,
	name,
	type,
	tabs = "\t",
	incPos = true
)
{
	if (!IsKnownType(type))
	{
		console.log("Unknown " + type);

		return;
	}

	if (name == "")
	{
		name = "var_" + pos.toString(16).toUpperCase();
	}
	else if (name.substring(0, 1) == "[")
	{
		name = "var_" + pos.toString(16).toUpperCase() + name;
	}

	var count = GetItemCount(name);
	var size = GetTypeSize(type);

	size *= count;

	var posString = "";
	if (pos >= 10)
	{
		posString = "0x" + pos.toString(16).toUpperCase();
	}
	else
	{
		posString = pos.toString();
	}

	c += tabs + type + " " + name + "; // " + posString + NEW_LINE;

	c_assert += "static_assert(offsetof(" + structName + ", " + name.split("[")[0] + ") == " + posString + ");" + NEW_LINE;

	if (!incPos)
	{
		return;
	}

	pos += size;
}

function CreateActorDataFunction2
(
	structName,
	name,
	type
)
{
	if (!IsUnion(name, type))
	{
		CreateActorDataFunction
		(
			structName,
			name,
			type
		);

		return;
	}

	c += "\tunion" + NEW_LINE;
	c += "\t{" + NEW_LINE;

	var names = name.split(",");
	var types = type.split(",");

	for (var index = 0; index < names.length; index++)
	{
		CreateActorDataFunction
		(
			structName,
			names[index],
			types[index],
			"\t\t",
			false
		);
	}

	c += "\t};" + NEW_LINE;

	pos += GetUnionSize(name, type);
}

function CreateActorData
(
	structName,
	id
)
{
	c += "struct " + structName + NEW_LINE;
	c += "{" + NEW_LINE;
	
	pos = 0;

	for (var itemIndex = 0; itemIndex < items.length; itemIndex++)
	{
		var item = items[itemIndex];

		var name      = item[0];
		var type      = item[1];
		var off       = item[2];
		var character = item[3];

		if ((character != undefined) && !(character & id))
		{
			continue;
		}

		var diff = (off - pos);
		if (diff)
		{
			c += "\t_(" + diff.toString() + ");" + NEW_LINE;
		}

		pos = off;

		CreateActorDataFunction2
		(
			structName,
			name,
			type
		);
	}

	var diff = (SIZE_DANTE - pos);
	if (diff)
	{
		c += "\t_(" + diff.toString() + ");" + NEW_LINE;
	}



	pos = SIZE_DANTE;

	for (var itemIndex = 0; itemIndex < extra.length; itemIndex++)
	{
		var item = extra[itemIndex];

		var name = item[0];
		var type = item[1];

		var lastPos = pos;

		if (IsUnion(name, type))
		{
			var unionSize = GetUnionSize(name, type);

			if (unionSize >= 8)
			{
				Align(16);
			}
			else if
			(
				(unionSize >= 4) &&
				(unionSize < 8)
			)
			{
				Align(8);
			}
		}
		else if (type.match(/\*/))
		{
			Align(16);
		}
		else if (name.match(/\[/))
		{
			Align(16);
		}

		var diff = (pos - lastPos);
		if (diff)
		{
			c += "\t_(" + diff.toString() + ");" + NEW_LINE;
		}

		CreateActorDataFunction2
		(
			structName,
			name,
			type
		);
	}

	c += "" + NEW_LINE;
	c += "\toperator byte8 *()" + NEW_LINE;
	c += "\t{" + NEW_LINE;
	c += "\t\treturn reinterpret_cast<byte8 *>(this);" + NEW_LINE;
	c += "\t}" + NEW_LINE;

	c += "};" + NEW_LINE;
}

CreateActorData("ActorData", 0);
c_assert += "" + NEW_LINE;
c += "" + NEW_LINE;

CreateActorData("ActorDataDante", CHAR_DANTE);
c_assert += "" + NEW_LINE;
c += "" + NEW_LINE;

CreateActorData("ActorDataBob", CHAR_BOB);
c_assert += "" + NEW_LINE;
c += "" + NEW_LINE;

CreateActorData("ActorDataLady", CHAR_LADY);
c_assert += "" + NEW_LINE;
c += "" + NEW_LINE;

CreateActorData("ActorDataVergil", CHAR_VERGIL);

c += NEW_LINE;
c += c_assert;



c += NEW_LINE;

for (var index = endTagLine; index < obj.length; index++)
{
	var str = obj[index].substring(0, (obj[index].length - 2));
	c += str + NEW_LINE;
}

fs.writeFileSync(filename, c);

console.log("");

// Cheat Engine

console.log("Cheat Engine");
console.log("");

function CreateActorCheatEntryFunction
(
	name,
	type,
	off,
	hex,
	actor
)
{
	CreateCheatEntry
	(
		name,
		hex,
		type,
		"Mary.Actor_actorBaseAddr",
		off.toString(16).toUpperCase(),
		(actor * 8).toString(16).toUpperCase()
	);
}

function CreateActorCheatEntry
(
	name,
	type,
	actor
)
{
	if (!IsKnownType(type))
	{
		console.log("Unknown " + type);
		return;
	}

	var count = 1;
	var size = GetTypeSize(type);
	var variableType = GetVariableType(type);
	var hex = GetShowAsHex(type);

	if (name == "")
	{
		name = "var_" + pos.toString(16).toUpperCase();
	}
	else if (name.substring(0, 1) == "[")
	{
		name = "var_" + pos.toString(16).toUpperCase() + name;
	}

	{
		var matches = name.match(/\[\d+?\]/g);
		if (matches)
		{
			for (var matchIndex = 0; matchIndex < matches.length; matchIndex++)
			{
				count *= parseInt(matches[matchIndex].match(/\[(\d+?)\]/)[1]);
			}
		}
	}

	for (var index = 0; index < count; index++, pos += size)
	{
		var description = name.split("[")[0];

		if (count > 1)
		{
			description += " " + lz(index);
		}

		if (variableType != "")
		{
			CreateActorCheatEntryFunction(description, variableType, pos, hex, actor);
			continue;
		}

		if (type.match(/Size_/))
		{
			continue;
		}
		else if (type == "vec4")
		{
			CreateActorCheatEntryFunction(description + " x", "Float", (pos + 0  ), false, actor);
			CreateActorCheatEntryFunction(description + " y", "Float", (pos + 4  ), false, actor);
			CreateActorCheatEntryFunction(description + " z", "Float", (pos + 8  ), false, actor);
			CreateActorCheatEntryFunction(description + " a", "Float", (pos + 0xC), false, actor);
			continue;
		}
		else if (type == "MotionData")
		{
			CreateActorCheatEntryFunction(description + " index", "Byte", (pos + 0), false, actor);
			CreateActorCheatEntryFunction(description + " group", "Byte", (pos + 1), false, actor);
			continue;
		}
		else if (type == "ModelData")
		{
			continue;
		}
		else if (type == "DevilModelMetadataDante")
		{
			continue;
		}
		else if (type == "BodyPartData")
		{
			continue;
		}
		else if (type == "ModelMetadata")
		{
			continue;
		}
		else if (type == "PhysicsLinkData")
		{
			continue;
		}
		else if (type == "ShadowData")
		{
			continue;
		}
		else if (type == "PhysicsData")
		{
			continue;
		}
		else if (type == "PhysicsMetadata")
		{
			continue;
		}
		else if (type == "RecoveryData")
		{
			continue;
		}
		else if (type == "InputData")
		{
			continue;
		}
		else if (type == "ActorEventData")
		{
			continue;
		}
		else
		{
			console.log("Ignore " + type);
		}
	}
}

function CreateCheatEntries
(
	groupName,
	id
)
{
	GroupStart(groupName, true);

	for (var actor = 0; actor < 4; actor++)
	{
		GroupStart(lz(actor), true);

		// Main

		for (var itemIndex = 0; itemIndex < items.length; itemIndex++)
		{
			var item = items[itemIndex];

			var name      = item[0];
			var type      = item[1];
			var off       = item[2];
			var character = item[3];

			if ((character != undefined) && !(character & id))
			{
				continue;
			}

			pos = off;

			CreateActorCheatEntry(name, type, actor);
		}

		pos = SIZE_DANTE;

		// Ex

		for (var itemIndex = 0; itemIndex < extra.length; itemIndex++)
		{
			var item = extra[itemIndex];

			var name = item[0];
			var type = item[1];

			if (type.match(/\*/))
			{
				Align(16);
			}
			else if (name.match(/\[/))
			{
				Align(16);
			}

			CreateActorCheatEntry(name, type, actor);
		}

		GroupEnd();
	}
	
	GroupEnd();
}

c = "";

CheatTableStart();

// CreateCheatEntries("ACTOR_DATA"       , 0          );
CreateCheatEntries("ACTOR_DATA_DANTE" , CHAR_DANTE );
// CreateCheatEntries("ACTOR_DATA_BOB"   , CHAR_BOB   );
// CreateCheatEntries("ACTOR_DATA_LADY"  , CHAR_LADY  );
// CreateCheatEntries("ACTOR_DATA_VERGIL", CHAR_VERGIL);

CheatTableEnd();

fs.writeFileSync("actorData.txt", c);
