#include "includes.hpp"

#define ConfigFile ("C:\\chameleonEsp\\settings.ini")

void Settings::InitializeSettings()
{
	this->bFovChanger = false;
	this->fFovValue = 90.0f;
	this->bInitHooks = false;
	this->bLines = false;
	this->bNames = false;
	this->bSkeleton = false;
	this->bDumpBones = true;
}

void Settings::SaveSettings()
{
	//fopen_s(&file, ConfigFile, ("wb"));
	//if (file) {
	//	fwrite(&cfg, sizeof(cfg), 1, file);
	//	fclose(file);
	//}
}

void Settings::LoadSettings()
{
	InitializeSettings();
	//fopen_s(&file, ConfigFile, ("rb"));
	//if (file) {
	//	fseek(file, 0, SEEK_END);
	//	auto size = ftell(file);

	//	if (size == sizeof(cfg)) {
	//		fseek(file, 0, SEEK_SET);
	//		fread(&cfg, sizeof(cfg), 1, file);
	//		fclose(file);
	//	}
	//	else
	//	{
	//		fclose(file);
	//		InitializeSettings();
	//	}
	//}
	//else
	//{
	//	InitializeSettings();
	//}
}