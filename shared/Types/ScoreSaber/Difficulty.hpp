#pragma once
#include "../TypeMacros.hpp"

DECLARE_JSON_CLASS(ScoreSaber, Difficulty_t,
    ERROR_CHECK
    GETTER_VALUE(int, LeaderboardId, "leaderboardId");
    GETTER_VALUE(int, Difficulty, "difficulty");
    GETTER_VALUE(std::string, GameMode, "gameMode");
    GETTER_VALUE(std::string, DifficultyRaw, "difficultyRaw");
)
