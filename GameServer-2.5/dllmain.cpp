#include <Windows.h>
#include <iostream>
#include <thread>
#include <detours.h>

#include "SDK.hpp"

#include "Globals.h"

#include "Functions/Abilities.h"
#include "Functions/Inventory.h"
#include "Functions/Match.h"
#include "Functions/Replication.h"
#include "Functions/Beacon.h"

#include "Util.h"
#include <fstream>
#include "Hooks.h"
#include "InitFunc.h"


DWORD WINAPI MainThread(LPVOID)
{
    Util::InitConsole();

    SetConsoleTitleA("Fortnite GameServer 2.5 (Made By Heliato)");
    srand(time(0));

    if (Init::InitializeAll())
    {
        Hooks::InitHooks();

        UFortEngine* FortEngine = Globals::GetFortEngine();
        UGameplayStatics* GameplayStatics = Globals::GetGameplayStatics();
        APlayerController* PlayerController = Globals::GetServerPlayerController();

        if (FortEngine && GameplayStatics && PlayerController)
        {
            UFortConsole* NewConsole = (UFortConsole*)GameplayStatics->SpawnObject(UFortConsole::StaticClass(), FortEngine->GameViewport);

            if (NewConsole)
                FortEngine->GameViewport->ViewportConsole = (UFortConsole*)(NewConsole);

            PlayerController->SwitchLevel(L"Athena_Terrain");
            //PlayerController->SwitchLevel(L"Athena_Faceoff");
        }

        HLog("Init Success !")
    }
    else
    {
        HLog("Init Failed !")
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE mod, DWORD reason, LPVOID res)
{
    if (reason == 1)
        CreateThread(0, 0, MainThread, mod, 0, 0);

    return TRUE;
}