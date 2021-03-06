#ifndef SCRIPT_COMPONENT_H
#define SCRIPT_COMPONENT_H

#include "../Actor/GameObject.h"
#include "../Utility/Util.h"
#include "BaseComponent.h"
#include <luaPlus.h>
#include "../sol/sol.hpp"

class ComponentManager;
class BaseComponent;
using namespace LuaPlus;

class ScriptComponent : public BaseComponent
{
public:
	//ScriptComponent();
	ScriptComponent( GameObject& obj);
	~ScriptComponent(void);

	void loadScript(std::string _fileName, sol::state &_luaPlus);
	virtual void Update(float dt);
	sol::state lua;
private:
	std::vector<ComponentManager*>* obj;

};

#endif // !ScriptComponent_H