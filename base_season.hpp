#include <iostream>

// Class Declaration 
class Season;

// Class Definition
class Season {

    public:
        Season();
        ~Season();

        std::string virtual get_winner();
        void virtual set_winner( std::string i_winner );

        std::string virtual *get_top_4();
        void virtual set_top_4( std::string *&i_p_top_4, std::size_t i_capacity );

        std::string virtual get_contestant( std::size_t i_placement );
        void virtual set_contestants( std::string *&i_contestants, std::size_t i_capacity );

        std::string virtual *get_finale_songs();
        void virtual set_finale_songs( std::string *&i_finale_songs, std::size_t i_capacity );
        std::size_t virtual get_num_finale_songs();

        int virtual get_num_episodes();
        void virtual set_num_episodes( int i_num_episodes );

        std::size_t virtual get_num_contestants();
        void virtual set_num_contestants( int i_num_contestants );

        void virtual set_guest_judges( std::size_t i_capacity );
        void virtual set_guest_judge( std::string i_guest_judge, std::size_t index );
        std::string virtual *get_guest_judges();
        std::size_t virtual get_num_guest_judges();

        void virtual print ( unsigned int i_intent );


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

};

// Modify this such that this is the base class for all seasons, then define another base class for seasons with disqualifications/double shantays/double sashays