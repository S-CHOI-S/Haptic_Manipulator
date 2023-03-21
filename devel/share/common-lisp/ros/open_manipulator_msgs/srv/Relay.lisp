; Auto-generated. Do not edit!


(cl:in-package open_manipulator_msgs-srv)


;//! \htmlinclude Relay-request.msg.html

(cl:defclass <Relay-request> (roslisp-msg-protocol:ros-message)
  ((Relay
    :reader Relay
    :initarg :Relay
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Relay-request (<Relay-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Relay-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Relay-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_manipulator_msgs-srv:<Relay-request> is deprecated: use open_manipulator_msgs-srv:Relay-request instead.")))

(cl:ensure-generic-function 'Relay-val :lambda-list '(m))
(cl:defmethod Relay-val ((m <Relay-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader open_manipulator_msgs-srv:Relay-val is deprecated.  Use open_manipulator_msgs-srv:Relay instead.")
  (Relay m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Relay-request>) ostream)
  "Serializes a message object of type '<Relay-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Relay) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Relay-request>) istream)
  "Deserializes a message object of type '<Relay-request>"
    (cl:setf (cl:slot-value msg 'Relay) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Relay-request>)))
  "Returns string type for a service object of type '<Relay-request>"
  "open_manipulator_msgs/RelayRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Relay-request)))
  "Returns string type for a service object of type 'Relay-request"
  "open_manipulator_msgs/RelayRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Relay-request>)))
  "Returns md5sum for a message object of type '<Relay-request>"
  "51f5c35c7d58c3899d91662099bc3872")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Relay-request)))
  "Returns md5sum for a message object of type 'Relay-request"
  "51f5c35c7d58c3899d91662099bc3872")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Relay-request>)))
  "Returns full string definition for message of type '<Relay-request>"
  (cl:format cl:nil "bool Relay~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Relay-request)))
  "Returns full string definition for message of type 'Relay-request"
  (cl:format cl:nil "bool Relay~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Relay-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Relay-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Relay-request
    (cl:cons ':Relay (Relay msg))
))
;//! \htmlinclude Relay-response.msg.html

(cl:defclass <Relay-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass Relay-response (<Relay-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Relay-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Relay-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name open_manipulator_msgs-srv:<Relay-response> is deprecated: use open_manipulator_msgs-srv:Relay-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Relay-response>) ostream)
  "Serializes a message object of type '<Relay-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Relay-response>) istream)
  "Deserializes a message object of type '<Relay-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Relay-response>)))
  "Returns string type for a service object of type '<Relay-response>"
  "open_manipulator_msgs/RelayResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Relay-response)))
  "Returns string type for a service object of type 'Relay-response"
  "open_manipulator_msgs/RelayResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Relay-response>)))
  "Returns md5sum for a message object of type '<Relay-response>"
  "51f5c35c7d58c3899d91662099bc3872")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Relay-response)))
  "Returns md5sum for a message object of type 'Relay-response"
  "51f5c35c7d58c3899d91662099bc3872")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Relay-response>)))
  "Returns full string definition for message of type '<Relay-response>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Relay-response)))
  "Returns full string definition for message of type 'Relay-response"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Relay-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Relay-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Relay-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Relay)))
  'Relay-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Relay)))
  'Relay-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Relay)))
  "Returns string type for a service object of type '<Relay>"
  "open_manipulator_msgs/Relay")