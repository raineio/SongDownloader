#pragma once
#include "../TypeMacros.hpp"

DECLARE_JSON_CLASS(BeatSaver, UserDiffStats,
    ERROR_CHECK
    GETTER_VALUE(int, Total, "total");
    GETTER_VALUE(int, Easy, "easy");
    GETTER_VALUE(int, Normal, "normal");
    GETTER_VALUE(int, Hard, "hard");
    GETTER_VALUE(int, Expert, "expert");
    GETTER_VALUE(int, ExpertPlus, "expertPlus");
)
