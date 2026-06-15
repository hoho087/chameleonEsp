class Settings
{
public:
	bool bMenuOpen;
	bool bInitHooks;
	bool bFovChanger;
	float fFovValue;
	bool bLines;
	bool bNames;
	bool bBox;
	bool bSkeleton;
	bool bDumpBones;
	void InitializeSettings();
	void SaveSettings();
	void LoadSettings();
};