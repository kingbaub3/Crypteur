// zeCrypter.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "zeCrypter.h"
#include "cryptage.h"
#include "Miroir.h"




// Il s'agit d'un exemple de fonction exportée.
ZECRYPTER_API int fnzeCrypter(void)
{
	return 42;
}

// Il s'agit du constructeur d'une classe qui a été exportée.
// consultez zeCrypter.h pour la définition de la classe
CzeCrypter::CzeCrypter()
{
	return;
}
