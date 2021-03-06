// Le bloc ifdef suivant est la façon standard de créer des macros qui facilitent l'exportation 
// à partir d'une DLL. Tous les fichiers contenus dans cette DLL sont compilés avec le symbole DLL_MIROIRE_EXPORTS
// défini sur la ligne de commande. Ce symbole ne doit pas être défini pour un projet
// qui utilisent cette DLL. De cette manière, les autres projets dont les fichiers sources comprennent ce fichier considèrent les fonctions 
// DLL_MIROIRE_API comme étant importées à partir d'une DLL, tandis que cette DLL considère les symboles
// définis avec cette macro comme étant exportés.
#ifdef DLL_MIROIRE_EXPORTS
#define DLL_MIROIRE_API __declspec(dllexport)
#else
#define DLL_MIROIRE_API __declspec(dllimport)
#endif

// Cette classe est exportée de DLL_Miroire.dll
class DLL_MIROIRE_API CDLL_Miroire {
public:
	CDLL_Miroire(void);
	// TODO: ajoutez ici vos méthodes.
};

extern DLL_MIROIRE_API int nDLL_Miroire;

DLL_MIROIRE_API int fnDLL_Miroire(void);
