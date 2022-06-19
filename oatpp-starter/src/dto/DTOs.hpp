#ifndef DTOs_hpp
#define DTOs_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 *  Data Transfer Object. Object containing fields only.
 *  Used in API for serialization/deserialization and validation
 */
class MyDto : public oatpp::DTO {
  
  DTO_INIT(MyDto, DTO)
  
  DTO_FIELD(Int32, statusCode);
  DTO_FIELD(String, message);
  
};

class VoterOut : public oatpp::DTO {
  DTO_INIT(VoterOut, DTO)

  DTO_FIELD(Int32, voterId);
};

// class VoterIn : public oatpp::DTO {
//   DTO_INIT(VoterIn, DTO)
// }

#include OATPP_CODEGEN_END(DTO)

#endif /* DTOs_hpp */
