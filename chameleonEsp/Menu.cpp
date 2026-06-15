#include "includes.hpp"

void Menu::Init()
{
	ImGui::SetNextWindowSize({ 280,280 });
	ImGui::Begin("phxgg esp", nullptr, ImGuiWindowFlags_NoScrollbar);
	ImGui::Checkbox("Init Hooks", &cfg->bInitHooks);
	ImGui::Checkbox("Fov Changer", &cfg->bFovChanger);

	if (cfg->bFovChanger)
	{
		ImGui::SliderFloat("Fov Value", &cfg->fFovValue, 50.0, 180);
	}

	ImGui::Checkbox("Box", &cfg->bBox);
	ImGui::Checkbox("Lines", &cfg->bLines);
	ImGui::Checkbox("Name", &cfg->bNames);
	ImGui::Checkbox("Skeleton", &cfg->bSkeleton);
	ImGui::Checkbox("Dump Bones", &cfg->bDumpBones);

	ImGui::End();
}