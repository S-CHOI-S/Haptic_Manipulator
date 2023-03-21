;; Auto-generated. Do not edit!


(when (boundp 'open_manipulator_msgs::Relay)
  (if (not (find-package "OPEN_MANIPULATOR_MSGS"))
    (make-package "OPEN_MANIPULATOR_MSGS"))
  (shadow 'Relay (find-package "OPEN_MANIPULATOR_MSGS")))
(unless (find-package "OPEN_MANIPULATOR_MSGS::RELAY")
  (make-package "OPEN_MANIPULATOR_MSGS::RELAY"))
(unless (find-package "OPEN_MANIPULATOR_MSGS::RELAYREQUEST")
  (make-package "OPEN_MANIPULATOR_MSGS::RELAYREQUEST"))
(unless (find-package "OPEN_MANIPULATOR_MSGS::RELAYRESPONSE")
  (make-package "OPEN_MANIPULATOR_MSGS::RELAYRESPONSE"))

(in-package "ROS")





(defclass open_manipulator_msgs::RelayRequest
  :super ros::object
  :slots (_Relay ))

(defmethod open_manipulator_msgs::RelayRequest
  (:init
   (&key
    ((:Relay __Relay) nil)
    )
   (send-super :init)
   (setq _Relay __Relay)
   self)
  (:Relay
   (&optional __Relay)
   (if __Relay (setq _Relay __Relay)) _Relay)
  (:serialization-length
   ()
   (+
    ;; bool _Relay
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _Relay
       (if _Relay (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _Relay
     (setq _Relay (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass open_manipulator_msgs::RelayResponse
  :super ros::object
  :slots ())

(defmethod open_manipulator_msgs::RelayResponse
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass open_manipulator_msgs::Relay
  :super ros::object
  :slots ())

(setf (get open_manipulator_msgs::Relay :md5sum-) "51f5c35c7d58c3899d91662099bc3872")
(setf (get open_manipulator_msgs::Relay :datatype-) "open_manipulator_msgs/Relay")
(setf (get open_manipulator_msgs::Relay :request) open_manipulator_msgs::RelayRequest)
(setf (get open_manipulator_msgs::Relay :response) open_manipulator_msgs::RelayResponse)

(defmethod open_manipulator_msgs::RelayRequest
  (:response () (instance open_manipulator_msgs::RelayResponse :init)))

(setf (get open_manipulator_msgs::RelayRequest :md5sum-) "51f5c35c7d58c3899d91662099bc3872")
(setf (get open_manipulator_msgs::RelayRequest :datatype-) "open_manipulator_msgs/RelayRequest")
(setf (get open_manipulator_msgs::RelayRequest :definition-)
      "bool Relay
---

")

(setf (get open_manipulator_msgs::RelayResponse :md5sum-) "51f5c35c7d58c3899d91662099bc3872")
(setf (get open_manipulator_msgs::RelayResponse :datatype-) "open_manipulator_msgs/RelayResponse")
(setf (get open_manipulator_msgs::RelayResponse :definition-)
      "bool Relay
---

")



(provide :open_manipulator_msgs/Relay "51f5c35c7d58c3899d91662099bc3872")


