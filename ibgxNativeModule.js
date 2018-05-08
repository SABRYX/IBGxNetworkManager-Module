//  Created by react-native-create-bridge

import { NativeModules } from 'react-native'

const { ibgx } = NativeModules

export default {
  exampleMethod () {
    return ibgx.exampleMethod()
  },
  GET(URL,Objectx){
    return ibgx.GET(URL,Objectx)
  },
  POST(URL,Objectx){
    return ibgx.POST(URL,Objectx)
  },
  DELETE(URL,Objectx){
    return ibgx.DELETE(URL,Objectx)
  },
  PATCH(URL,Objectx){
    return ibgx.PATCH(URL,Objectx)
  },
  PUT(URL,Objectx){
    return ibgx.PUT(URL,Objectx)
  },
  HEAD(URL,Objectx){
    return ibgx.HEAD(URL,Objectx)
  },

  EXAMPLE_CONSTANT: ibgx.EXAMPLE_CONSTANT
}
