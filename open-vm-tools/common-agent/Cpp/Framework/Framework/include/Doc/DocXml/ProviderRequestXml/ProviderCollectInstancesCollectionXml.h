/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef ProviderCollectInstancesCollectionXml_h_
#define ProviderCollectInstancesCollectionXml_h_


#include "Doc/ProviderRequestDoc/CProviderCollectInstancesCollectionDoc.h"

#include "Doc/DocXml/ProviderRequestXml/ProviderRequestXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the ProviderCollectInstancesCollection class to/from XML
	namespace ProviderCollectInstancesCollectionXml {

		/// Adds the ProviderCollectInstancesCollectionDoc into the XML.
		void PROVIDERREQUESTXML_LINKAGE add(
			const SmartPtrCProviderCollectInstancesCollectionDoc providerCollectInstancesCollectionDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the ProviderCollectInstancesCollectionDoc from the XML.
		SmartPtrCProviderCollectInstancesCollectionDoc PROVIDERREQUESTXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
