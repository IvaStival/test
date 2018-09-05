//
//  sampleCmd.hpp
//  teste
//
//  Created by iva stival on 22/02/18.
//  Copyright © 2018 iva stival. All rights reserved.
//

#ifndef sampleCmd_hpp
#define sampleCmd_hpp

#include <stdio.h>

class SampleCmd  {
    
private:
    
    SampleCmd();
    
public:
    
    static void* creator();
    
    virtual int doIt();
    bool isUndoable() const;
    
};


#endif /* sampleCmd_hpp */
