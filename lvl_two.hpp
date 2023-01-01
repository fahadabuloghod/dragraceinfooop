#pragma once
#include "lvl_one.hpp"

class Disq_Shant : public Shantay_Season {

    public: 
        Disq_Shant();
        ~Disq_Shant();
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
        std::string double_shantay;
        std::string disqualified;

};

class Sash_Shant : public Shantay_Season {

    public: 
        Sash_Shant();
        ~Sash_Shant();
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
        std::string double_shantay;
        std::string double_sashay;

};