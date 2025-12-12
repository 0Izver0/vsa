#include "entity_registry.hpp"

namespace vsa::village {
    EntityRegistry::EntityRegistry() = default;
    EntityRegistry& EntityRegistry::get_instance()
    {
        static EntityRegistry instance;
        return instance;
    };

    void EntityRegistry::resident_register(const std::string& id, const std::string& name)
    {
        m_residents[id] = name;
    };

    void EntityRegistry::item_register(const std::string& id, const std::string& name)
    {
        m_items[id] = name;
    };

    const std::map<std::string, std::string>& EntityRegistry::get_residents() const
    {
        return m_residents;
    };

    const std::map<std::string, std::string>& EntityRegistry::get_items() const
    {
        return m_items;
    };
}