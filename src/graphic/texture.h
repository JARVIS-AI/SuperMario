#include <stdio.h>
#include <SDL2/SDL.h>

#ifndef SUPERMARIO_TEXTURE_H
#define SUPERMARIO_TEXTURE_H

SDL_Texture * texture_create(SDL_Renderer *renderer, const char* name);
void texture_render(SDL_Renderer *renderer, SDL_Texture * texture, int x, int y);

#endif
