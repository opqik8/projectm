#ifndef PRESET_FRAME_IO_HPP
#define PRESET_FRAME_IO_HPP

/** Container for all preset writeable engine variables. It's a struct
 * so that it's light weight. Access is done directly on
 * members for Mr. Sperl's convenience */
class PresetOutputs {
public:
    /// @bug should this be here?
    //int mesh_i, mesh_j;

    /* PER FRAME CONSTANTS BEGIN */
    float zoom;
    float zoomexp;
    float rot;
    float warp;

    float sx;
    float sy;
    float dx;
    float dy;
    float cx;
    float cy;

    float decay;

    float wave_r;
    float wave_g;
    float wave_b;
    float wave_o;
    float wave_x;
    float wave_y;
    float wave_mystery;

    float ob_size;
    float ob_r;
    float ob_g;
    float ob_b;
    float ob_a;

    float ib_size;
    float ib_r;
    float ib_g;
    float ib_b;
    float ib_a;

    float mv_a ;
    float mv_r ;
    float mv_g ;
    float mv_b ;
    float mv_l;
    float mv_x;
    float mv_y;
    float mv_dy;
    float mv_dx;

     /* PER_FRAME CONSTANTS END */

    float fRating;
    float fGammaAdj;
    float fVideoEchoZoom;
    float fVideoEchoAlpha;

    int nVideoEchoOrientation;
    int nWaveMode;
    int bAdditiveWaves;
    int bWaveDots;
    int bWaveThick;
    int bModWaveAlphaByVolume;
    int bMaximizeWaveColor;
    int bTexWrap;
    int bDarkenCenter;
    int bRedBlueStereo;
    int bBrighten;
    int bDarken;
    int bSolarize;
    int bInvert;
    int bMotionVectorsOn;


    float fWaveAlpha ;
    float fWaveScale;
    float fWaveSmoothing;
    float fWaveParam;
    float fModWaveAlphaStart;
    float fModWaveAlphaEnd;
    float fWarpAnimSpeed;
    float fWarpScale;
    float fShader;

    /* Q VARIABLES START */

    float q1;
    float q2;
    float q3;
    float q4;
    float q5;
    float q6;
    float q7;
    float q8;


    /* Q VARIABLES END */

    float **zoom_mesh;
    float **zoomexp_mesh;
    float **rot_mesh;

    float **sx_mesh;
    float **sy_mesh;
    float **dx_mesh;
    float **dy_mesh;
    float **cx_mesh;
    float **cy_mesh;



};

/** Container for all *read only* engine variables. It's a struct
 * so that it's light weight. Access is done directly on
 * members for Mr. Sperl's convenience */
class PresetInputs {

public:
    /* PER_PIXEL CONSTANTS BEGIN */

    float x_per_pixel;
    float y_per_pixel;
    float rad_per_pixel;
    float ang_per_pixel;
    
    /* PER_PIXEL CONSTANT END */

  int fps;


  float time;
  float bass;
  float mid;
  float bass_att;
  float mid_att;
  float treb_att;
  int frame;
  float progress;
  

  /* variables added in 1.04 */
 int gx,gy;

 /// @bug are these in use?
    //int meshx;
    //int meshy;
float **x_mesh;
    float **y_mesh;
    float **rad_mesh;
    float **theta_mesh;
};

#endif
