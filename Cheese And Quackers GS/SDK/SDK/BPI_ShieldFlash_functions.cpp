﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BPI_ShieldFlash

#include "Basic.hpp"

#include "BPI_ShieldFlash_classes.hpp"


namespace SDK
{

// Function BPI_ShieldFlash.BPI_ShieldFlash_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_ShieldFlash_C::FlashShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_ShieldFlash_C", "FlashShield");

	AsUObject()->ProcessEvent(Func, nullptr);
}

}

