template struct Result<bool>;
template struct Result<cv::Matx<float, 2, 3>>;
template struct Result<cv::Ptr<cv::Feature2D>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::AffineFeature2D>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::BoostDesc>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::DAISY>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::FREAK>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::LATCH>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::LUCID>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::MSDDetector>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::PCTSignatures>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::SIFT>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::SURF>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::StarDetector>*>;
template struct Result<cv::Ptr<cv::xfeatures2d::VGG>*>;
template struct Result<cv::Size_<float>>;
template struct Result<cv::xfeatures2d::Elliptic_KeyPoint*>;
template struct Result<double>;
template struct Result<float>;
template struct Result<int>;
template struct Result<std::vector<cv::DMatch>*>;
template struct Result<std::vector<cv::KeyPoint>*>;
template struct Result<std::vector<cv::Mat>*>;
template struct Result<std::vector<cv::Point_<float>>*>;
template struct Result<std::vector<cv::xfeatures2d::Elliptic_KeyPoint>*>;
template struct Result<std::vector<float>*>;
template struct Result<std::vector<int>*>;
template struct Result<std::vector<std::vector<cv::KeyPoint>>*>;
extern "C" void cv_PtrOfAffineFeature2D_delete(cv::Ptr<cv::xfeatures2d::AffineFeature2D>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::AffineFeature2D* cv_PtrOfAffineFeature2D_get_inner_ptr(cv::Ptr<cv::xfeatures2d::AffineFeature2D>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfBoostDesc_delete(cv::Ptr<cv::xfeatures2d::BoostDesc>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::BoostDesc* cv_PtrOfBoostDesc_get_inner_ptr(cv::Ptr<cv::xfeatures2d::BoostDesc>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfBriefDescriptorExtractor_delete(cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::BriefDescriptorExtractor* cv_PtrOfBriefDescriptorExtractor_get_inner_ptr(cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfDAISY_delete(cv::Ptr<cv::xfeatures2d::DAISY>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::DAISY* cv_PtrOfDAISY_get_inner_ptr(cv::Ptr<cv::xfeatures2d::DAISY>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfFREAK_delete(cv::Ptr<cv::xfeatures2d::FREAK>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::FREAK* cv_PtrOfFREAK_get_inner_ptr(cv::Ptr<cv::xfeatures2d::FREAK>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfHarrisLaplaceFeatureDetector_delete(cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::HarrisLaplaceFeatureDetector* cv_PtrOfHarrisLaplaceFeatureDetector_get_inner_ptr(cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfLATCH_delete(cv::Ptr<cv::xfeatures2d::LATCH>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::LATCH* cv_PtrOfLATCH_get_inner_ptr(cv::Ptr<cv::xfeatures2d::LATCH>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfLUCID_delete(cv::Ptr<cv::xfeatures2d::LUCID>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::LUCID* cv_PtrOfLUCID_get_inner_ptr(cv::Ptr<cv::xfeatures2d::LUCID>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfMSDDetector_delete(cv::Ptr<cv::xfeatures2d::MSDDetector>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::MSDDetector* cv_PtrOfMSDDetector_get_inner_ptr(cv::Ptr<cv::xfeatures2d::MSDDetector>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfPCTSignatures_delete(cv::Ptr<cv::xfeatures2d::PCTSignatures>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::PCTSignatures* cv_PtrOfPCTSignatures_get_inner_ptr(cv::Ptr<cv::xfeatures2d::PCTSignatures>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfPCTSignaturesSQFD_delete(cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::PCTSignaturesSQFD* cv_PtrOfPCTSignaturesSQFD_get_inner_ptr(cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfSIFT_delete(cv::Ptr<cv::xfeatures2d::SIFT>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::SIFT* cv_PtrOfSIFT_get_inner_ptr(cv::Ptr<cv::xfeatures2d::SIFT>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfSURF_delete(cv::Ptr<cv::xfeatures2d::SURF>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::SURF* cv_PtrOfSURF_get_inner_ptr(cv::Ptr<cv::xfeatures2d::SURF>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfStarDetector_delete(cv::Ptr<cv::xfeatures2d::StarDetector>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::StarDetector* cv_PtrOfStarDetector_get_inner_ptr(cv::Ptr<cv::xfeatures2d::StarDetector>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfVGG_delete(cv::Ptr<cv::xfeatures2d::VGG>* instance) {
	delete instance;
}

extern "C" cv::xfeatures2d::VGG* cv_PtrOfVGG_get_inner_ptr(cv::Ptr<cv::xfeatures2d::VGG>* instance) {
	return instance->get();
}

extern "C" {
	void cv_VectorOfElliptic_KeyPoint_delete(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance) {
		delete instance;
	}

	std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* cv_VectorOfElliptic_KeyPoint_new() {
		return new std::vector<cv::xfeatures2d::Elliptic_KeyPoint>();
	}

	size_t cv_VectorOfElliptic_KeyPoint_len(const std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance) {
		return instance->size();
	}

	bool cv_VectorOfElliptic_KeyPoint_is_empty(const std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfElliptic_KeyPoint_capacity(const std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfElliptic_KeyPoint_shrink_to_fit(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfElliptic_KeyPoint_reserve(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfElliptic_KeyPoint_remove(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfElliptic_KeyPoint_swap(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfElliptic_KeyPoint_clear(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance) {
		instance->clear();
	}

	void cv_VectorOfElliptic_KeyPoint_push(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance, cv::xfeatures2d::Elliptic_KeyPoint* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfElliptic_KeyPoint_insert(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance, size_t index, cv::xfeatures2d::Elliptic_KeyPoint* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::xfeatures2d::Elliptic_KeyPoint*> cv_VectorOfElliptic_KeyPoint_get(const std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance, size_t index) {
		return Ok<cv::xfeatures2d::Elliptic_KeyPoint*>(new cv::xfeatures2d::Elliptic_KeyPoint((*instance)[index]));
	}

	void cv_VectorOfElliptic_KeyPoint_set(std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* instance, size_t index, cv::xfeatures2d::Elliptic_KeyPoint* val) {
		(*instance)[index] = *val;
	}

}


