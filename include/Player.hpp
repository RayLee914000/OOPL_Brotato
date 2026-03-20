#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Util/GameObject.hpp"

// 讓 Player 繼承 Util::GameObject 的所有能力
class Player : public Util::GameObject {
public:
    // 這叫做「建構子 (Constructor)」，當 Player 誕生時會第一時間執行的動作
    Player();

    // 這是 Player 專屬的演出動作
    void Update();
};

#endif