//==============================================================================
//                                                                              
//            Copyright (C) 2012-2013, RDA Microelectronics.                    
//                            All Rights Reserved                               
//                                                                              
//      This source code is the property of RDA Microelectronics and is         
//      confidential.  Any  modification, distribution,  reproduction or        
//      exploitation  of  any content of this file is totally forbidden,        
//      except  with the  written permission  of   RDA Microelectronics.        
//                                                                              
//==============================================================================
//                                                                              
//    THIS FILE WAS GENERATED FROM ITS CORRESPONDING XML VERSION WITH COOLXML.  
//                                                                              
//                       !!! PLEASE DO NOT EDIT !!!                             
//                                                                              
//  $HeadURL$                                                                   
//  $Author$                                                                    
//  $Date$                                                                      
//  $Revision$                                                                  
//                                                                              
//==============================================================================
//
/// @file
//
//==============================================================================

#ifndef _GLOBAL_MACROS_H_
#define _GLOBAL_MACROS_H_



// =============================================================================
//  MACROS
// =============================================================================

// =============================================================================
//  TYPES
// =============================================================================




//#define KSEG0(addr)     ( (addr) | 0x80000000 )
//#define KSEG1(addr)     ( (addr) | 0xa0000000 )
#define KSEG0(addr)     ( (addr) )
#define KSEG1(addr)     ( (addr) )


/* Define access cached or uncached */
#define MEM_ACCESS_CACHED(addr)     ((UINT32*)((UINT32)(addr)&0xdfffffff))
#define MEM_ACCESS_UNCACHED(addr)   ((UINT32*)((UINT32)(addr)|0x20000000))

/* Register access for assembly */
#define BASE_HI(val) (((0xa0000000 | val) & 0xffff8000) + (val & 0x8000))
#define BASE_LO(val) (((val) & 0x7fff) - (val & 0x8000))


/* to extract bitfield from register value */
#define GET_BITFIELD(dword, bitfield) (((dword) & (bitfield ## _MASK)) >> (bitfield ## _SHIFT))

#define EXP2(n) (1<<(n))



#endif

