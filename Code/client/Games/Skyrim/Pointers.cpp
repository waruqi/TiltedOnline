#include <TiltedOnlinePCH.h>
#include "Pointers.h"

using TiltedPhoques::Pattern;

RegisterPointer(RegisterSink, Pattern("E8 ? ? ? ? 48 85 FF 48 8D 5F ? 75 ? 48 8B DE E8", 0, Pattern::kRelativeIndirection4, 1));
RegisterPointer(ActorMediator_Instance, Pattern("48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 33 D2 FF 10 48 89 2D ? ? ? ? 48 89 2D ? ? ? ?", 1, Pattern::kRelativeIndirection4, 3));
RegisterPointer(ApplyAnimationVariables, Pattern("4C 8B DC 55 56 57 41 54 41 55 41 56 41 57 48 83 EC ? 49 C7 43 ? ? ? ? ? 49 89 5B ? 0F 29 74 24 ? 48 8B FA"));
RegisterPointer(PerformComplexAction, Pattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B CA 48 8B DA"));
RegisterPointer(ApplyAnimationVariables_Instance, Pattern("48 8B 0D ? ? ? ? 45 33 C0 48 8B D3 E8 ? ? ? ? 48 8B 5C 24 ?", 1, Pattern::kRelativeIndirection4, 3));
RegisterPointer(TESActionData_vtable, Pattern("48 8D 05 ? ? ? ? 48 89 45 ? 48 8D 4D ? E8 ? ? ? ? 4C 8D 2D ? ? ? ?", 1, Pattern::kRelativeIndirection4, 3));
RegisterPointer(PerformAction, Pattern("48 89 5C 24 ? 56 48 83 EC ? 48 8B F1 48 8B DA 48 8B 4A ? 48 85 C9"));
RegisterPointer(FormFactory_Instance, Pattern("48 8D 35 ? ? ? ? 48 8B FA 0F B6 D9 75 ? 33 D2 41 B8 ? ? ? ?", 1, Pattern::kRelativeIndirection4, 3));
RegisterPointer(GetFormById, Pattern("40 57 48 83 EC ? 48 C7 44 24 ? ? ? ? ? 48 89 5C 24 ? 48 89 74 24 ? 8B F9"));
RegisterPointer(GetChangeFlags, Pattern("E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 44 8B 44 24 ? 8D 55 ?", 1, Pattern::kRelativeIndirection4, 1));
RegisterPointer(GetChangeFlags_Arg1_Instance, Pattern("48 8B 05 ? ? ? ? 8B 88 ? ? ? ? ? ? F6 C1 ? 75 ? BA ? ? ? ? 48 8B CD", 1, Pattern::kRelativeIndirection4, 3));
RegisterPointer(IAnimationGraphManagerHolder_SetFloatVariable, Pattern("F3 0F 11 54 24 ? 48 83 EC ?"));
RegisterPointer(INISettings_Instance, Pattern("48 89 05 ? ? ? ? 48 83 C4 ? C3 48 8B C1 48 89 0D ? ? ? ? 48 83 C4 ? C3 ? ? ? ? ? ? C2 ? ?", 1, Pattern::kRelativeIndirection4, 3));
