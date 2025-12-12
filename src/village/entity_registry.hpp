#pragma once

#include <string>
#include <map>

namespace vsa::village {

    class EntityRegistry {
    public:
        static EntityRegistry& get_instance();

    private:
        EntityRegistry();

    public:
        void resident_register(const std::string& id, const std::string& name);
        const std::map<std::string, std::string>& get_residents() const;

    private:
        std::map<std::string, std::string> m_residents;
    };

    template <typename T>
    class ResidentRegistry {
    public:
        ResidentRegistry() {
            auto& r = EntityRegistry::get_instance();
            r.resident_register(T::get_id(), T::get_name());
        }
    };

}