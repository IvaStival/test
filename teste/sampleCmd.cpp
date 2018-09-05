//
//  sampleCmd.cpp
//  teste
//
//  Created by iva stival on 22/02/18.
//  Copyright © 2018 iva stival. All rights reserved.
//

#include "sampleCmd.hpp"

void* SampleCmd::creator(){
    return new SampleCmd();
}

bool SampleCmd::isUndoable() const{
    return false;
}

int SampleCmd::doIt(){
    return 10;
}
