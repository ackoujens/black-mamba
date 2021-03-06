/**
 * GameLoopTest.h
 * Contributors:
 *	* Jens Ackou
 * Description:
 *	Testing of a general game loop.
 *	Can be used to test and tweak the game loop performance.
 */

#ifndef GAMELOOPTEST
#define GAMELOOPTEST

#include "../system/Application.h"

class GameLoopTest : public Application
{
public:

  GameLoopTest();

private:

  virtual void update();
  virtual void render();
};

#endif /* ifndef GAMELOOPTEST */
