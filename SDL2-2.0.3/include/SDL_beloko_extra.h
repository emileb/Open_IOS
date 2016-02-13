//
//  SDL_beloko_extra.h
//  SDL
//
//  Created by Emile Belanger on 17/01/2016.
//
//

#ifndef SDL_beloko_extra_h
#define SDL_beloko_extra_h


#ifdef __cplusplus
extern "C"
{
#endif
    
    
    void SDL_SetSwapBufferCallBack(void (*pt2Func)(void));
    
    
    void SDL_SetTouchControlsInterface(TouchControlsInterface *IF);

    
#ifdef __cplusplus
}
#endif


#endif /* SDL_beloko_extra_h */
