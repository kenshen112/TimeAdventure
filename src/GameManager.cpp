#include "GameManager.h"

bool GameManager::Init()
{
	Flag* flagToCreate;


	if (flags.empty())
	{
		fs = std::filesystem::current_path();

		std::filesystem::path p = (fs / "Json" / "Flags.json").make_preferred();

		json = new nlohmann::json();

		if (std::filesystem::exists(p))
		{
			in.open(p);
			std::string temp;

			if (in)
			{
				try
				{
				*json = nlohmann::json::parse(in);
				}
				catch(nlohmann::json::exception& ex)
				{
					std::cerr << "Parse Error: " << ex.id << std::endl;
					return false;
				}
				
				in.close();

				for (auto object : *json)
				{
					flagToCreate = new Flag(object);
					flags.push_back(*flagToCreate);
				}
			}

			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}

	}
	
	json = new nlohmann::json();
	std::filesystem::path p = (fs / "Json" / "Rooms.json").make_preferred();
	in.open(p);
	if (in)
	{			
		try
		{
			*json = nlohmann::json::parse(in);
		}
		catch(nlohmann::json::exception& ex)
		{
			std::cerr << "Parse Error: " << ex.id << std::endl;
			return false;
		}
		
		for (auto object : *json)
		{
			common.rooms[object["x"].get<int>()][object["y"].get<int>()].Create(object);
		}

		Open(0, 1);
	}
	else
	{
		std::cerr << "File Read Error" << std::endl;
		return false;
	}
	
	return true;
}

void GameManager::Run()
{
	 // if execution is correct or non error return true and run again.
	
	// THIS IS WRONG AND WILL BE REFRACTORED LATER
	while (true)
	{
		currentCommand = parseMeDaddy.recieveCommand();
	}
}

bool GameManager::Quit()
{
	// Returns true if exit proceedure runs correctly. Implying potential save functions etc
	return true;
}

bool GameManager::Open(int rX, int rY)
{
	common.currentRoom = common.rooms[rX][rY];
	common.player.Move(rX, rY);
	print.Print(common.currentRoom.GetDescription().c_str());
	return true;
}

bool GameManager::Close()
{
	delete[](common.rooms);
	flags.clear();
	return true;
}
