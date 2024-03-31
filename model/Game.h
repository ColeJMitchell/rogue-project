//
// Created by cojmi on 3/14/2024.
//

#ifndef REPO_LAB6_3_MITCHECJ_JIANGY_GAME_H
#define REPO_LAB6_3_MITCHECJ_JIANGY_GAME_H

#include <vector>

class Game{
public:
    Game();
    std::vector<int> list_of_enemy_ids;
    int id_counter=0;
    int num_moves=0;
    void start_game();
    void increase_num_moves();

    void update_enemy_pos(int id, int row, int col);

    void update_player_row(int id, int row);

    void update_player_col(int id, int col);

    std::vector<int> add_all_enemies();

    void spawn_enemy(int id, std::string name, int row, int col);

    std::vector<int> add_all_items();

    void spawn_item(int id, std::string name);

    void spawn_item(int id, std::string name, int row, int col);
};
#endif //REPO_LAB6_3_MITCHECJ_JIANGY_GAME_H