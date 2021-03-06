// Le bloc ifdef suivant est la façon standard de créer des macros qui facilitent l'exportation 
// à partir d'une DLL. Tous les fichiers contenus dans cette DLL sont compilés avec le symbole ZECRYPTER_EXPORTS
// défini sur la ligne de commande. Ce symbole ne doit pas être défini pour un projet
// qui utilisent cette DLL. De cette manière, les autres projets dont les fichiers sources comprennent ce fichier considèrent les fonctions 
// ZECRYPTER_API comme étant importées à partir d'une DLL, tandis que cette DLL considère les symboles
// définis avec cette macro comme étant exportés.
#ifdef ZECRYPTER_EXPORTS
#define ZECRYPTER_API __declspec(dllexport)
#else
#define ZECRYPTER_API __declspec(dllimport)
#endif

// Cette classe est exportée de zeCrypter.dll
class ZECRYPTER_API CzeCrypter 
{
public:
	CzeCrypter(void);
	// TODO: ajoutez ici vos méthodes.
	virtual void initialiser(void * param = "default") = 0;
	virtual string chiffrer(string decodee) = 0;
	virtual string dechiffrer(string codee) = 0;
	~CzeCrypter(void);
protected:
	void setInitialisation(bool flag);
	bool getInitialisation();
	void verifierInitialisation();
private:
	bool estInitialisee;
};

ZECRYPTER_API int fnzeCrypter(void);
