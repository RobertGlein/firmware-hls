
#ifndef __SYNTHESIS__
#include <ostream>

#include "FullStubLayer2S.hh"
#include "FullStubLayerPS.hh"
#include "ReducedStubLayer.hh"

std::ostream & operator<<(std::ostream & o, const FullStubLayer2S & sl )
{
  o << "FullStubLayer2S: " 
    << "raw data: 0x" << std::hex << sl.raw() << std::dec
    << ", pt, r, phi, z " 
    << sl.GetPt() << ", " << sl.GetR() << ", "
    << sl.GetPhi() << ", " << sl.GetZ() 
    << std::endl;
  
  return o;

}


std::ostream & operator<<(std::ostream & o, const FullStubLayerPS & sl )
{
  o << "FullStubLayerPS: " 
    << "raw data: 0x" << std::hex << sl.raw() << std::dec
    << ", pt, r, phi, z " 
    << sl.GetPt() << ", " << sl.GetR() << ", "
    << sl.GetPhi() << ", " << sl.GetZ() 
    << std::endl;
  
  return o;

}

std::ostream & operator<<(std::ostream & o, const ReducedStubLayer & sl )
{
  o << "ReducedStubLayer: " 
    << "raw data: 0x" << std::hex << sl.raw() << std::dec
    << ", pt, r, phi, z, index: " 
    << sl.GetPt() << ", " << sl.GetR() << ", "
    << sl.GetPhi() << ", " << sl.GetZ() << ", "
    << sl.GetIndex()
    << std::endl;
  
  return o;

}


#endif // not __SYNTHESIS__