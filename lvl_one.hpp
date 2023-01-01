#pragma once
#include <iostream>
#include "base_season.hpp"

// Class Declarations
class Disqualified_Season;
class Sashay_Season;
class Shantay_Season;

// Class Definitions
class Disqualified_Season : public Season {

    public:
        Disqualified_Season();
        ~Disqualified_Season();
        void virtual print ( unsigned int i_intent ) override;
        void set_disqualified( std::size_t i_placement );
        std::string get_disqualified();

    private:
        std::string winner;
        std::string *p_top_4;
        std::string *p_contestants;
        std::size_t num_contestants;
        std::string *p_finale_songs;        
        std::size_t num_finale_songs;
        int num_episodes;
        std::string *p_guest_judges;
        std::size_t num_guest_judges;
        std::string disqualified;

};

class Sashay_Season : public Season {

    public:
        Sashay_Season();
        ~Sashay_Season();
        void virtual print ( unsigned int i_intent ) override;
        std::string get_double_sashay();
        void set_double_sashay( std::size_t i_placement_1, std::size_t i_placement_2 );
        

    private:
        std::string winner;
        std::string *p_top_4;
        std::string *p_contestants;
        std::size_t num_contestants;
        std::string *p_finale_songs;        
        std::size_t num_finale_songs;
        int num_episodes;
        std::string *p_guest_judges;
        std::size_t num_guest_judges;
        std::string double_sashay;
};

class Shantay_Season : public Season {

    public:
        Shantay_Season();
        ~Shantay_Season();
        void virtual print ( unsigned int i_intent ) override;
        std::string get_double_shantay();
        void set_double_shantay( std::size_t i_placement_1, std::size_t i_placement_2 );

    private:
        std::string winner;
        std::string *p_top_4;
        std::string *p_contestants;
        std::size_t num_contestants;
        std::string *p_finale_songs;        
        std::size_t num_finale_songs;
        int num_episodes;
        std::string *p_guest_judges;
        std::size_t num_guest_judges;
        std::string double_shantay;
};

class All_Stars: public Season {

    public:
        All_Stars();
        ~All_Stars();
        void virtual print ( unsigned int i_intent ) override;
        std::string *get_lipsync_assassins();
        void set_lipsync_assassins( std::string *&i_p_lipsync_assassins, std::size_t i_capacity );
        std::size_t get_num_lipsync_assassins();
        void set_num_lipsync_assassins( std::size_t i_capacity );

    private:
        std::string winner;
        std::string *p_top_4;
        std::string *p_contestants;
        std::size_t num_contestants;
        std::string *p_finale_songs;        
        std::size_t num_finale_songs;
        int num_episodes;
        std::string *p_guest_judges;
        std::size_t num_guest_judges;
        std::string *p_lipsync_assassins;
        std::size_t num_lipsync_assassins;

};