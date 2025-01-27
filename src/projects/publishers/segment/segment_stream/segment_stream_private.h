#pragma once

#define OV_LOG_TAG "SegmentStream"

#define logad(format, ...) logtd("[%s/%s] " format, _app_name.CStr(), _stream_name.CStr(), GetPacketizerName(), ##__VA_ARGS__)
#define logas(format, ...) logts("[%s/%s] " format, _app_name.CStr(), _stream_name.CStr(), GetPacketizerName(), ##__VA_ARGS__)

#define logai(format, ...) logti("[%s/%s] " format, _app_name.CStr(), _stream_name.CStr(), GetPacketizerName(), ##__VA_ARGS__)
#define logaw(format, ...) logtw("[%s/%s] " format, _app_name.CStr(), _stream_name.CStr(), GetPacketizerName(), ##__VA_ARGS__)
#define logae(format, ...) logte("[%s/%s] " format, _app_name.CStr(), _stream_name.CStr(), GetPacketizerName(), ##__VA_ARGS__)
#define logac(format, ...) logtc("[%s/%s] " format, _app_name.CStr(), _stream_name.CStr(), GetPacketizerName(), ##__VA_ARGS__)
