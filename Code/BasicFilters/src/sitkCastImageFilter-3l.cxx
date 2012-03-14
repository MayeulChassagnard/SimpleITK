/*=========================================================================
*
*  Copyright Insight Software Consortium
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*         http://www.apache.org/licenses/LICENSE-2.0.txt
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
*=========================================================================*/
#include "sitkCastImageFilter.h"
#include "sitkCastImageFilter.hxx"


namespace itk
{
namespace simple
{


void CastImageFilter::RegisterMemberFactory3l()
{
  // basic to Label
  m_DualMemberFactory->RegisterMemberFunctions<IntegerPixelIDTypeList, LabelPixelIDTypeList, 3, ToLabelAddressor<MemberFunctionType> > ();

 // Label to basic
  m_DualMemberFactory->RegisterMemberFunctions<LabelPixelIDTypeList, IntegerPixelIDTypeList, 3, LabelToAddressor<MemberFunctionType> > ();

}

} // end namespace simple
} // end namespace itk
