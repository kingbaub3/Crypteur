// DLL_Miroire.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "DLL_Miroire.h"


// Il s'agit d'un exemple de variable exportée
DLL_MIROIRE_API int nDLL_Miroire=0;

// Il s'agit d'un exemple de fonction exportée.
DLL_MIROIRE_API int fnDLL_Miroire(void)
{
	return 42;
}

// Il s'agit du constructeur d'une classe qui a été exportée.
// consultez DLL_Miroire.h pour la définition de la classe
CDLL_Miroire::CDLL_Miroire()
{
	return;
}
