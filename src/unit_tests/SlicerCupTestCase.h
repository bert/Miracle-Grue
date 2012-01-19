#ifndef SLICERCUP_TEST_CASE_H
#define SLICERCUP_TEST_CASE_H

#include <cppunit/extensions/HelperMacros.h>



class SlicerCupTestCase : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( SlicerCupTestCase );
//        CPPUNIT_TEST( testAllTogeter );
        CPPUNIT_TEST( testIndividuals );
        CPPUNIT_TEST( testCathedral_Crossing);
    CPPUNIT_TEST_SUITE_END();

public:
protected:

  void testAllTogeter();
  void testIndividuals();
  void testCathedral_Crossing();
};


#endif
