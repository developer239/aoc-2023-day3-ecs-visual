#pragma once

#include <SDL.h>
#include <string>
#include <utility>

struct TextComponent {
  std::string text;
  SDL_Color color;
  int fontSize;
  std::string fontId = "pico8";

  int positionX = 0;
  int positionY = 0;
  bool isFixed = true;

  TextComponent(
      std::string text = "", SDL_Color color = {0, 0, 0, 255}, int fontSize = 24
  )
      : text(std::move(text)), color(color), fontSize(fontSize) {}
};
