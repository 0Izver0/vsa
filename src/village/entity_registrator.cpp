#include <village/entity_registry.hpp>

#include <village/residents/resident_baker.hpp>
#include <village/residents/resident_blacksmith.hpp>
#include <village/residents/resident_miner.hpp>

namespace vsa::village {
    const static ResidentRegistry<ResidentBaker> r_rb;
    const static ResidentRegistry<ResidentBlacksmith> r_rbs;
    const static ResidentRegistry<ResidentMiner> r_rm;
}
