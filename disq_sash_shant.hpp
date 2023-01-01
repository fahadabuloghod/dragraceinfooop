#include <iostream>
#include "lvl_two.hpp"

class Disq_Sash_Shant : public Sash_Shant {

    public: 
        Disq_Sash_Shant();
        ~Disq_Sash_Shant();
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
        std::string double_sashay;
        std::string disqualified;

};