#ifndef APP_HPP
#define APP_HPP

#include "pch.hpp" // IWYU pragma: export
// #include <memory>
// #include "Util/GameObject.hpp"
// #include "Util/Image.hpp"
#include "Player.hpp"

class App {
public:
    enum class State {
        START,
        UPDATE,
        END,
    };

    State GetCurrentState() const { return m_CurrentState; }

    void Start();

    void Update();

    void End(); // NOLINT(readability-convert-member-functions-to-static)

private:
    void ValidTask();

    State m_CurrentState = State::START;
    // std::shared_ptr<Util::GameObject> m_Player;
    Player m_Player;
};

#endif
