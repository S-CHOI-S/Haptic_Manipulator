// Auto-generated. Do not edit!

// (in-package open_manipulator_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class RelayRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Relay = null;
    }
    else {
      if (initObj.hasOwnProperty('Relay')) {
        this.Relay = initObj.Relay
      }
      else {
        this.Relay = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RelayRequest
    // Serialize message field [Relay]
    bufferOffset = _serializer.bool(obj.Relay, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RelayRequest
    let len;
    let data = new RelayRequest(null);
    // Deserialize message field [Relay]
    data.Relay = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'open_manipulator_msgs/RelayRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '51f5c35c7d58c3899d91662099bc3872';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool Relay
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RelayRequest(null);
    if (msg.Relay !== undefined) {
      resolved.Relay = msg.Relay;
    }
    else {
      resolved.Relay = false
    }

    return resolved;
    }
};

class RelayResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RelayResponse
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RelayResponse
    let len;
    let data = new RelayResponse(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'open_manipulator_msgs/RelayResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RelayResponse(null);
    return resolved;
    }
};

module.exports = {
  Request: RelayRequest,
  Response: RelayResponse,
  md5sum() { return '51f5c35c7d58c3899d91662099bc3872'; },
  datatype() { return 'open_manipulator_msgs/Relay'; }
};
