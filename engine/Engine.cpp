#include "pch.h"
#include "Engine.h"

dll::CREATURE* dll::CREATURE::EvilFactory(types type, float start_x)
{
	CREATURE* ret = nullptr;
	ret = new CREATURE(type, start_x);
	return ret;
}

void* dll::CreatureFactory(types what, float first_x)
{
	void* ret_pointer = nullptr;

	switch (what)
	{
	case types::hero:
		ret_pointer = new dll::HERO(first_x);
		break;

	case types::centaur1:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;

	case types::centaur2:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;

	case types::croc:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;

	case types::gargoyle1:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;

	case types::gargoyle2:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;

	case types::octopus1:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;

	case types::octopus2:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;

	case types::walking_tree:
		ret_pointer = dll::CREATURE::EvilFactory(what, first_x);
		break;
	}

	return ret_pointer;
}
dll::Shot dll::ShotFactory(types what, float start_x, float start_y, float end_x, float end_y)
{
	Shot ret_pointer = nullptr;

	switch (what)
	{
	case types::evil_shot:
		ret_pointer = new SHOT(what, start_x, start_y);
		break;

	case types::hero_shot:
		ret_pointer = new SHOT(what, start_x, start_y, end_x, end_y);
		break;
	}
	return ret_pointer;
}