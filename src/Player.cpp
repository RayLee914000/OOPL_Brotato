#include "Player.hpp"
#include "Util/Image.hpp"
#include "Util/Input.hpp"
#include "Util/Keycode.hpp"

// 當 Player 被創造出來時（準備階段）
Player::Player() {
    // 1. 自己穿上衣服
    SetDrawable(std::make_shared<Util::Image>(RESOURCE_DIR "/Player/body.png"));

    // 2. 設定初始站位
    m_Transform.translation = {0.0f, 0.0f};
    m_Transform.scale = {1.0f, 1.0f};
}

// 演員在舞台上每秒鐘都在做的事
void Player::Update() {
    // 設定移動的速度
    float speed = 5.0f;

    // 偵測鍵盤：如果按住 W 鍵，就往上移動（Y座標增加）
    if (Util::Input::IsKeyPressed(Util::Keycode::W)) {
        m_Transform.translation.y += speed;
    }
    // 偵測鍵盤：如果按住 S 鍵，就往下移動（Y座標減少）
    if (Util::Input::IsKeyPressed(Util::Keycode::S)) {
        m_Transform.translation.y -= speed;
    }
    // 偵測鍵盤：如果按住 A 鍵，就往左移動（X座標減少）
    if (Util::Input::IsKeyPressed(Util::Keycode::A)) {
        m_Transform.translation.x -= speed;
    }
    // 偵測鍵盤：如果按住 D 鍵，就往右移動（X座標增加）
    if (Util::Input::IsKeyPressed(Util::Keycode::D)) {
        m_Transform.translation.x += speed;
    }
}