#pragma once
#include "../TypeMacros.hpp"
#include "Song.hpp"

DECLARE_JSON_CLASS(BeastSaber, Page,
    ERROR_CHECK
    GETTER_VALUE(std::vector<BeastSaber::Song>, Songs, "songs");
    GETTER_VALUE_OPTIONAL(int, Next_page, "next_page");
)
