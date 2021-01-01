#include "Autopilot.h"
#include "Autopilot_private.h"

Parameters_Autopilot_T AutopilotModelClass::Autopilot_P = {

  {
    {
      0.0,
      0.0
    },

    {
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0
    },

    {
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0
    },

    {
      0.0,

      {
        0.0,
        0.0,
        0.0
      },

      {
        0.0,
        0.0,
        0.0
      }
    }
  },


  { 100.0, 150.0, 250.0, 300.0 },


  { 100.0, 150.0, 250.0, 300.0 },


  { 100.0, 150.0, 250.0, 300.0 },


  { 100.0, 150.0, 250.0, 300.0 },


  { 0.0, 50.0, 100.0, 1000.0, 2500.0 },


  { 100.0, 150.0, 250.0, 300.0 },


  { 0.0, 50.0, 100.0, 1000.0, 2500.0 },

  1.0,

  1.0,

  1.0,

  1.0,

  1.0,

  2.0,

  1.0,

  1.0,

  1.0,

  1.0,

  0.0,

  0.0,

  0.0,

  0.0,

  0.0,

  0.0,


  { 1.9, 1.9, 3.0, 3.0 },


  { 1.9, 1.9, 3.0, 3.0 },


  { 1.9, 1.9, 3.0, 3.0 },


  { 1.9, 1.9, 3.0, 3.0 },


  { 5.0, 5.0, 5.0, 15.0, 15.0 },


  { 1.9, 1.9, 3.0, 3.0 },


  { 0.0, 0.0, -0.3, -3.0, -3.0 },

  30.0,

  50.0,

  -10.0,

  -10.0,

  1.0,

  1.0,

  2.0,

  0.0,

  -1.0,

  0.0,

  0.0,

  0.0,

  0.0,

  -1.0,

  0.017453292519943295,

  0.017453292519943295,

  196.85039370078741,

  50.0,

  -300.0,

  0.00508,

  57.295779513082323,

  0.7,

  -2.0,

  -0.2,

  0.0,

  0.017453292519943295,

  0.7,

  0.017453292519943295,

  0.017453292519943295,

  196.85039370078741,

  0.00508,

  57.295779513082323,

  0.7,

  0.0,

  0.017453292519943295,

  0.017453292519943295,

  196.85039370078741,

  20.0,

  8.0,

  0.00508,

  57.295779513082323,

  0.7,

  0.017453292519943295,

  0.017453292519943295,

  196.85039370078741,

  8.0,

  500.0,

  -500.0,

  0.00508,

  57.295779513082323,

  0.7,

  7.0,

  0.0,

  -1.0,

  -1.0,

  -1.0,

  2.0,

  1.0,

  1.0,

  0.0,

  2.0,

  1.0,

  0.0,

  360.0,

  -1.0,

  1.0,


  { 15.0, 30.0, 30.0, 19.0, 19.0 },


  { 0.0, 150.0, 300.0, 450.0, 600.0 },

  360.0,

  -1.0,

  0.0,

  360.0,

  -1.0,

  0.0,

  360.0,

  360.0,

  38.0,

  45.0,

  -45.0,

  1.0,

  1.0,

  -1.0,

  0.0,

  360.0,

  360.0,

  0.017453292519943295,

  90.0,

  30.0,

  -30.0,

  1.0,

  -1.0,

  0.0,

  360.0,

  360.0,

  10.0,

  0.0,

  2.0,

  0.0,

  -1.0,

  0.0,

  -1.0,

  5.0,

  -1.0,

  0.0,

  2.0,

  0.0,

  1.0,

  0.0,

  1.0,

  0.51444444444444448,

  1.0,

  0.51444444444444448,

  1.0,

  10.0,

  0.0,

  2.0,

  0.0,

  5.0,

  -5.0,

  0.2,

  1.5,

  -1.0,

  0.017453292519943295,

  0.1019367991845056,

  57.295779513082323,

  0.0,

  -1.0,

  0.0,

  0.017453292519943295,

  0.017453292519943295,

  0.51444444444444448,

  196.85039370078741,

  0.00508,

  1.0,

  57.295779513082323,

  0.7,

  0.51444444444444448,

  1.0,

  1.0,

  10.0,

  0.0,

  2.0,

  0.0,

  0.51444444444444448,

  1.0,

  18.0,

  -1.0,

  10.0,

  0.0,

  2.0,

  0.0,

  5.0,

  -5.0,

  0.2,

  1.5,

  -1.0,

  0.017453292519943295,

  0.1019367991845056,

  57.295779513082323,

  0.0,

  -1.0,

  120.0,

  -1.0,

  0.017453292519943295,

  0.017453292519943295,

  0.51444444444444448,

  196.85039370078741,

  0.00508,

  1.0,

  57.295779513082323,

  0.7,

  20.0,

  1.0,

  -1.0,

  0.0,

  2.0,

  0.0,

  1.0,

  0.0,

  1.0,

  0U,

  0U
};
