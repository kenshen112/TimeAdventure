#pragma once
#include <filesystem>
#include <fstream>
#include <vector> // Potentially an Std::map
#include "Room.h" // This has the string libs
#include "Flag.h"
#include "CommandParser.h"
#include "json.hpp"
#include "PrintHelper.h"
#include "Common.h"

class GameManager
{

private:
	std::vector<Flag> flags;
	std::string currentCommand;
	CommandParser parseMeDaddy;
	std::ifstream in;
	nlohmann::json *json;
	PrintHelper print;
	Actions action;

	Common common;

    std::filesystem::path fs;


public:
	bool Init();
	void Run(); // run all data and print
	bool Quit();
	bool Open(int rX, int rY); // Return error
	bool Close();
};

