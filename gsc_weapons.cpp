#include "gsc_weapons.hpp"

#if COMPILE_WEAPONS == 1

qboolean isValidWeaponId(int id)
{
	int weps = BG_GetNumWeapons();

	if (id >= weps || id < 0 || weps == 0)
		return qfalse;

	return qtrue;
}

void gsc_weapons_getweaponmaxammo()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id)) 
	{
		stackError("gsc_weapons_getweaponmaxammo() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponmaxammo() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->iMaxAmmo);
}

void gsc_weapons_getweaponclipsize()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponclipsize() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponclipsize() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->iClipSize);
}

void gsc_weapons_getweapondamage()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweapondamage() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweapondamage() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->damage);
}

void gsc_weapons_getweaponmeleedamage()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponmeleedamage() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponmeleedamage() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->iMeleeDamage);
}

void gsc_weapons_getweaponfiretime()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponfiretime() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponfiretime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->iFireTime);
}

void gsc_weapons_getweaponmeleetime()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponmeleetime() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponmeleetime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->iMeleeTime);
}

void gsc_weapons_getweaponreloadtime()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponreloadtime() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponreloadtime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->iReloadTime);
}

void gsc_weapons_getweaponreloademptytime()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponreloademptytime() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponreloademptytime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->iReloadEmptyTime);
}

void gsc_weapons_getweaponcookable()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponcookable() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponcookable() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->bCookOffHold);
}

void gsc_weapons_getweaponfusetime()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweaponfusetime() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponfusetime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushInt(weapon->fuseTime);
}

void gsc_weapons_setweapondamage()
{
	int id;
	char *name;
	int damage;

	if (stackGetParams("si", &name, &damage)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &damage))
	{
		stackError("gsc_weapons_setweapondamage() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweapondamage() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->damage = damage;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponmaxammo()
{
	int id;
	char *name;
	int ammo;

	if (stackGetParams("si", &name, &ammo)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &ammo))
	{
		stackError("gsc_weapons_setweaponmaxammo() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponmaxammo() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->iMaxAmmo = ammo;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponclipsize()
{
	int id;
	char *name;
	int clipSize;

	if (stackGetParams("si", &name, &clipSize)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &clipSize))
	{
		stackError("gsc_weapons_setweaponclipsize() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponclipsize() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->iClipSize = clipSize;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponmeleedamage()
{
	int id;
	char *name;
	int damage;

	if (stackGetParams("si", &name, &damage)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &damage))
	{
		stackError("gsc_weapons_setweaponmeleedamage() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponmeleedamage() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->iMeleeDamage = damage;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponfiretime()
{
	int id;
	char *name;
	int time;

	if (stackGetParams("si", &name, &time)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &time))
	{
		stackError("gsc_weapons_setweaponfiretime() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponfiretime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->iFireTime = time;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponmeleetime()
{
	int id;
	char *name;
	int time;

	if (stackGetParams("si", &name, &time)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &time))
	{
		stackError("gsc_weapons_setweaponmeleetime() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponmeleetime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->iMeleeTime = time;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponreloadtime()
{
	int id;
	char *name;
	int time;

	if (stackGetParams("si", &name, &time)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &time))
	{
		stackError("gsc_weapons_setweaponreloadtime() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponreloadtime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->iReloadTime = time;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponreloademptytime()
{
	int id;
	char *name;
	int time;

	if (stackGetParams("si", &name, &time)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &time))
	{
		stackError("gsc_weapons_setweaponreloademptytime() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponreloademptytime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->iReloadEmptyTime = time;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponcookable()
{
	int id;
	char *name;
	int cookable;

	if (stackGetParams("si", &name, &cookable)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &cookable))
	{
		stackError("gsc_weapons_setweaponcookable() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponcookable() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->bCookOffHold = cookable;

	stackPushBool(qtrue);
}

void gsc_weapons_setweaponfusetime()
{
	int id;
	char *name;
	int time;

	if (stackGetParams("si", &name, &time)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("ii", &id, &time))
	{
		stackError("gsc_weapons_setweaponfusetime() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponfusetime() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	weapon->fuseTime = time;

	stackPushBool(qtrue);
}

const char *hitlocs[] = { "none", "helmet", "head", "neck", "torso_upper", "torso_lower", "right_arm_upper", "right_arm_lower", "right_hand", "left_arm_upper", "left_arm_lower", "left_hand", "right_leg_upper", "right_leg_lower", "right_foot", "left_leg_upper", "left_leg_lower", "left_foot", "gun" };
int getHitLocOffset(const char *hitloc)
{
	int offset = 0;

	for (int i = 0; i < int( sizeof(hitlocs) / sizeof(hitlocs[0]) ); i++)
	{
		if (strcmp(hitlocs[i], hitloc) == 0)
		{
			offset = i;
			break;
		}
	}

	return offset;
}

void gsc_weapons_getweaponhitlocmultiplier()
{
	int id;
	char *name;
	char *hitloc;

	if (stackGetParams("ss", &name, &hitloc)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("is", &id, &hitloc))
	{
		stackError("gsc_weapons_getweaponhitlocmultiplier() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweaponhitlocmultiplier() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	int offset = getHitLocOffset(hitloc);

	stackPushFloat(weapon->locationDamageMultipliers[offset]);
}

void gsc_weapons_setweaponhitlocmultiplier()
{
	int id;
	char *name;
	float multiplier;
	char* hitloc;

	if (stackGetParams("ssf", &name, &hitloc, &multiplier)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("isf", &id, &hitloc, &multiplier))
	{
		stackError("gsc_weapons_setweaponhitlocmultiplier() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setweaponhitlocmultiplier() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);
	int offset = getHitLocOffset(hitloc);

	weapon->locationDamageMultipliers[offset] = multiplier;
	stackPushBool(qtrue);
}

void gsc_weapons_getmovespeedscale()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getmovespeedscale() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getmovespeedscale() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);

	stackPushFloat(weapon->moveSpeedScale);
}

void gsc_weapons_setmovespeedscale()
{
	int id;
    char *name;
	float scale;
    
    if (stackGetParams("sf", &name, &scale)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("if", &id, &scale))
	{
		stackError("gsc_weapons_setmovespeedscale() one or more arguments is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_setmovespeedscale() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}

	WeaponDef_t *weapon = BG_WeaponDefs(id);

	weapon->moveSpeedScale = scale;
	stackPushBool(qtrue);
}

void gsc_weapons_getloadedweapons()
{
	int numweapons = BG_GetNumWeapons();

	stackPushArray();

	for (int i = 0; i < numweapons; i++)
	{
		WeaponDef_t *weapon = BG_WeaponDefs(i);
		stackPushString(weapon->szInternalName);
		stackPushArrayLast();
	}
}

void gsc_weapons_getweapondisplayname()
{
	int id;
	char *name;

	if (stackGetParams("s", &name)) 
	{
		id = BG_FindWeaponIndexForName(name);
	}
	else if ( ! stackGetParams("i", &id))
	{
		stackError("gsc_weapons_getweapondisplayname() argument is undefined or has a wrong type");
		stackPushUndefined();
		return;
	}

	if (!isValidWeaponId(id))
	{
		stackError("gsc_weapons_getweapondisplayname() weapon index is out of bounds");
		stackPushUndefined();
		return;
	}
	
	WeaponDef_t *weapon = BG_WeaponDefs(id);
	stackPushString(weapon->szDisplayName);
	
	VariableValue *var;
	int param = 0;

	var = &scrVmPub.top[-param];
	var->type = STACK_LOCALIZED_STRING;
}

#endif
